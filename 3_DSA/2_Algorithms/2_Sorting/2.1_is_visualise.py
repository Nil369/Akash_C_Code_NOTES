import pygame # pip install pygame
import random
import time

# Initialize Pygame
pygame.init()

# Screen dimensions
width = 800
height = 600
screen = pygame.display.set_mode((width, height))
pygame.display.set_caption("Insertion Sort Visualizer")

# Colors
black = (0, 0, 0)
white = (255, 255, 255)
red = (255, 0, 0)
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

def insertion_sort_visualized(array):
    n = len(array)
    for i in range(1, n):
        key = array[i]
        j = i - 1

        while j >= 0 and array[j] > key:
            draw_array(array, highlight_indices=[j, j+1])
            time.sleep(0.01)
            array[j + 1] = array[j]
            j -= 1
            draw_array(array, highlight_indices=[j+1, j+2])
            time.sleep(0.01)

        array[j + 1] = key
        draw_array(array, highlight_indices=[j+1])
        time.sleep(0.01)

    draw_array(array)

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
                    insertion_sort_visualized(array)

        if not sorting:
            draw_array(array)
        clock.tick(60)

    pygame.quit()

if __name__ == "__main__":
    main()
