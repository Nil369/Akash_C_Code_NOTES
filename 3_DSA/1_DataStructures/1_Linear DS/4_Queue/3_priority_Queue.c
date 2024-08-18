/*

In a Priority Queue, every element is assigned a priority, and elements are dequeued based on their priority. 
The highest-priority elements are dequeued first. If two elements have the same priority, the FIFO rule applies.

*/


#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

struct PriorityQueue {
    int items[SIZE];
    int priorities[SIZE];
    int front;
    int rear;
};

void initQueue(struct PriorityQueue* q) {
    q->front = -1;
    q->rear = -1;
}

int isFull(struct PriorityQueue* q) {
    return q->rear == SIZE - 1;
}

int isEmpty(struct PriorityQueue* q) {
    return q->front == -1;
}

void enqueue(struct PriorityQueue* q, int value, int priority) {
    if (isFull(q)) {
        printf("Queue is full!\n");
        return;
    }
    if (isEmpty(q)) {
        q->front = 0;
    }
    q->rear++;
    q->items[q->rear] = value;
    q->priorities[q->rear] = priority;
    printf("%d with priority %d enqueued to queue\n", value, priority);
}

int dequeue(struct PriorityQueue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return -1;
    }
    
    int maxPriorityIndex = q->front;
    for (int i = q->front + 1; i <= q->rear; i++) {
        if (q->priorities[i] > q->priorities[maxPriorityIndex]) {
            maxPriorityIndex = i;
        }
    }
    
    int item = q->items[maxPriorityIndex];
    printf("%d dequeued from queue\n", item);
    
    // Shift elements to fill the gap
    for (int i = maxPriorityIndex; i < q->rear; i++) {
        q->items[i] = q->items[i + 1];
        q->priorities[i] = q->priorities[i + 1];
    }
    q->rear--;
    
    if (q->rear < q->front) {
        q->front = q->rear = -1;
    }
    
    return item;
}

int main() {
    struct PriorityQueue q;
    initQueue(&q);

    enqueue(&q, 10, 2);
    enqueue(&q, 20, 1);
    enqueue(&q, 30, 3);

    dequeue(&q);
    dequeue(&q);

    return 0;
}
