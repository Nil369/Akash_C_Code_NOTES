/*

A Circular Queue is a variation of a simple queue where the last position 
is connected back to the first position, forming a circle. It helps in 
utilizing memory efficiently by reusing the spaces freed by dequeuing.

*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

struct CircularQueue {
    int items[SIZE];
    int front;
    int rear;
};

void initQueue(struct CircularQueue* q) {
    q->front = -1;
    q->rear = -1;
}

int isFull(struct CircularQueue* q) {
    return (q->front == (q->rear + 1) % SIZE);
}

int isEmpty(struct CircularQueue* q) {
    return q->front == -1;
}

void enqueue(struct CircularQueue* q, int value) {
    if (isFull(q)) {
        printf("Queue is full!\n");
        return;
    }
    if (isEmpty(q)) {
        q->front = 0;
    }
    // Circular Increment Formula
    q->rear = (q->rear + 1) % SIZE;
    q->items[q->rear] = value;
    printf("%d enqueued to queue\n", value);
}

int dequeue(struct CircularQueue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return -1;
    }
    int item = q->items[q->front];
    if (q->front == q->rear) {
        q->front = q->rear = -1;
    } else {
        q->front = (q->front + 1) % SIZE;
    }
    printf("%d dequeued from queue\n", item);
    return item;
}

int main() {
    struct CircularQueue q;
    initQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    dequeue(&q);
    dequeue(&q);

    return 0;
}
