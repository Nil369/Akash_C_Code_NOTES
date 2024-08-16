import pygame
import random
import time

# Initialize Pygame
pygame.init()

# Screen dimensions
width = 800
height = 600
screen = pygame.display.set_mode((width, height))
pygame.display.set_caption("QuickSort Visualizer")

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

def partition(array, low, high):
    pivot = array[high]
    i = low - 1
    for j in range(low, high):
        if array[j] <= pivot:
            i += 1
            array[i], array[j] = array[j], array[i]
            draw_array(array, highlight_indices=[i, j])
            time.sleep(0.02)
    array[i + 1], array[high] = array[high], array[i + 1]
    draw_array(array, highlight_indices=[i + 1, high])
    time.sleep(0.02)
    return i + 1

def quicksort(array, low, high):
    if low < high:
        pi = partition(array, low, high)
        quicksort(array, low, pi - 1)
        quicksort(array, pi + 1, high)

def quicksort_visualized(array):
    quicksort(array, 0, len(array) - 1)
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
                    quicksort_visualized(array)

        if not sorting:
            draw_array(array)
        clock.tick(60)

    pygame.quit()

if __name__ == "__main__":
    main()
