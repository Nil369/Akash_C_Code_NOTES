import pygame
import random
import time

# Initialize Pygame
pygame.init()

# Screen dimensions
width = 800
height = 600
screen = pygame.display.set_mode((width, height))
pygame.display.set_caption("Merge Sort Visualizer")

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

def merge(array, left, middle, right):
    n1 = middle - left + 1
    n2 = right - middle

    L = array[left:middle + 1]
    R = array[middle + 1:right + 1]

    i = j = 0
    k = left

    while i < n1 and j < n2:
        if L[i] <= R[j]:
            array[k] = L[i]
            i += 1
        else:
            array[k] = R[j]
            j += 1
        draw_array(array, highlight_indices=[k])
        time.sleep(0.02)
        k += 1

    while i < n1:
        array[k] = L[i]
        draw_array(array, highlight_indices=[k])
        time.sleep(0.02)
        i += 1
        k += 1

    while j < n2:
        array[k] = R[j]
        draw_array(array, highlight_indices=[k])
        time.sleep(0.02)
        j += 1
        k += 1

def merge_sort(array, left, right):
    if left < right:
        middle = left + (right - left) // 2
        merge_sort(array, left, middle)
        merge_sort(array, middle + 1, right)
        merge(array, left, middle, right)

def merge_sort_visualized(array):
    merge_sort(array, 0, len(array) - 1)
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
                    merge_sort_visualized(array)

        if not sorting:
            draw_array(array)
        clock.tick(60)

    pygame.quit()

if __name__ == "__main__":
    main()
