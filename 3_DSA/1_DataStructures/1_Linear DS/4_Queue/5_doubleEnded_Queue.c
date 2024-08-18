/*

A Double-Ended Queue (Deque) is a type of queue where elements can be inserted 
and removed from both ends (i.e., front and rear). This provides more flexibility 
compared to a simple queue or circular queue.

✅ In a deque, you can perform the following operations:

🔵Insert at the front (enqueueFront)
🔵Insert at the rear (enqueueRear)
🔵Remove from the front (dequeueFront)
🔵Remove from the rear (dequeueRear)

*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

struct Deque {
    int items[SIZE];
    int front;
    int rear;
};

void initDeque(struct Deque* dq) {
    dq->front = -1;
    dq->rear = -1;
}

int isFull(struct Deque* dq) {
    return (dq->front == 0 && dq->rear == SIZE - 1) || (dq->front == dq->rear + 1);
}

int isEmpty(struct Deque* dq) {
    return dq->front == -1;
}

void enqueueRear(struct Deque* dq, int value) {
    if (isFull(dq)) {
        printf("Deque is full!\n");
        return;
    }
    if (isEmpty(dq)) {
        dq->front = 0;
        dq->rear = 0;
    } else if (dq->rear == SIZE - 1 && dq->front != 0) {
        dq->rear = 0;
    } else {
        dq->rear++;
    }
    dq->items[dq->rear] = value;
    printf("%d enqueued at rear\n", value);
}

void enqueueFront(struct Deque* dq, int value) {
    if (isFull(dq)) {
        printf("Deque is full!\n");
        return;
    }
    if (isEmpty(dq)) {
        dq->front = 0;
        dq->rear = 0;
    } else if (dq->front == 0) {
        dq->front = SIZE - 1;
    } else {
        dq->front--;
    }
    dq->items[dq->front] = value;
    printf("%d enqueued at front\n", value);
}

int dequeueFront(struct Deque* dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty!\n");
        return -1;
    }
    int item = dq->items[dq->front];
    if (dq->front == dq->rear) {
        dq->front = dq->rear = -1;
    } else if (dq->front == SIZE - 1) {
        dq->front = 0;
    } else {
        dq->front++;
    }
    printf("%d dequeued from front\n", item);
    return item;
}

int dequeueRear(struct Deque* dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty!\n");
        return -1;
    }
    int item = dq->items[dq->rear];
    if (dq->front == dq->rear) {
        dq->front = dq->rear = -1;
    } else if (dq->rear == 0) {
        dq->rear = SIZE - 1;
    } else {
        dq->rear--;
    }
    printf("%d dequeued from rear\n", item);
    return item;
}

int main() {
    struct Deque dq;
    initDeque(&dq);

    enqueueRear(&dq, 10);
    enqueueRear(&dq, 20);
    enqueueFront(&dq, 5);
    enqueueFront(&dq, 3);

    dequeueFront(&dq);
    dequeueRear(&dq);

    return 0;
}
