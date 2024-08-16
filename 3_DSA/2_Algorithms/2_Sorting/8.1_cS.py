import pygame
import random
import time

# Initialize Pygame
pygame.init()

# Screen dimensions
width = 800
height = 600
screen = pygame.display.set_mode((width, height))
pygame.display.set_caption("Counting Sort Visualizer")

# Colors
black = (0, 0, 0)
white = (255, 255, 255)
green = (0, 255, 0)

# Sorting array parameters
num_elements = 25
array = [random.randint(1, height - 50) for _ in range(num_elements)]
bar_width = width // num_elements

def draw_array(array, highlight_indices=None):
    screen.fill(black)
    for i, val in enumerate(array):
        color = white
        if highlight_indices and i in highlight_indices:
            color = green
        pygame.draw.rect(screen, color, pygame.Rect(i * bar_width, height - val, bar_width, val))
    pygame.display.update()

def counting_sort_visualized(array):
    max_val = max(array)
    min_val = min(array)
    range_of_elements = max_val - min_val + 1
    count = [0] * range_of_elements
    output = [0] * len(array)

    # Store the count of each element
    for i in range(len(array)):
        count[array[i] - min_val] += 1
        draw_array(array, highlight_indices=[i])
        time.sleep(0.01)
    
    # Change count[i] so that count[i] now contains the actual position of this element in output array
    for i in range(1, len(count)):
        count[i] += count[i - 1]

    # Build the output array
    for i in range(len(array) - 1, -1, -1):
        output[count[array[i] - min_val] - 1] = array[i]
        count[array[i] - min_val] -= 1
        draw_array(output, highlight_indices=[count[array[i] - min_val]])
        time.sleep(0.01)

    # Copy the sorted elements into the original array
    for i in range(len(array)):
        array[i] = output[i]
        draw_array(array, highlight_indices=[i])
        time.sleep(0.01)

def main():
    running = True
    sorting = False
    clock = pygame.time.Clock()

    while running:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                running = False

            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_SPACE and not sorting:
                    sorting = True
                    counting_sort_visualized(array)

        if not sorting:
            draw_array(array)
        clock.tick(60)

    pygame.quit()

if __name__ == "__main__":
    main()
