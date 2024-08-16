import pygame
import random
import time

# Initialize Pygame
pygame.init()

# Screen dimensions
width = 800
height = 600
screen = pygame.display.set_mode((width, height))
pygame.display.set_caption("Radix Sort Visualizer")

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

def counting_sort(array, exp):
    n = len(array)
    output = [0] * n
    count = [0] * 10

    for i in range(n):
        index = array[i] // exp
        count[index % 10] += 1

    for i in range(1, 10):
        count[i] += count[i - 1]

    i = n - 1
    while i >= 0:
        index = array[i] // exp
        output[count[index % 10] - 1] = array[i]
        count[index % 10] -= 1
        i -= 1

    for i in range(len(array)):
        array[i] = output[i]
        draw_array(array, highlight_indices=[i])
        time.sleep(0.02)

def radix_sort(array):
    max1 = max(array)
    exp = 1
    while max1 // exp > 0:
        counting_sort(array, exp)
        exp *= 10

def radix_sort_visualized(array):
    radix_sort(array)
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
                    radix_sort_visualized(array)

        if not sorting:
            draw_array(array)
        clock.tick(60)

    pygame.quit()

if __name__ == "__main__":
    main()
