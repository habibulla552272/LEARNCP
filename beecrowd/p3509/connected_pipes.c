#include <stdio.h>

#define MAX 100005

int heap[MAX];
int size = 0;

// Insert a value into min heap
void push(int value) {
    int i = size;
    heap[size] = value;
    size++;

    while (i > 0) {
        int parent = (i - 1) / 2;

        if (heap[parent] <= heap[i])
            break;

        int temp = heap[parent];
        heap[parent] = heap[i];
        heap[i] = temp;

        i = parent;
    }
}

// Remove and return the smallest value
int pop() {
    int result = heap[0];

    size--;

    heap[0] = heap[size];

    int i = 0;

    while (1) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        int smallest = i;

        if (left < size && heap[left] < heap[smallest])
            smallest = left;

        if (right < size && heap[right] < heap[smallest])
            smallest = right;

        if (smallest == i)
            break;

        int temp = heap[i];
        heap[i] = heap[smallest];
        heap[smallest] = temp;

        i = smallest;
    }

    return result;
}

int main() {

    int n;
    scanf("%d", &n);

    // Insert all pipes
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        push(x);
    }

    long long totalCost = 0;

    // Continue until only one pipe remains
    while (size > 1) {

        int first = pop();
        int second = pop();

        int newPipe = first + second;

        totalCost += newPipe;

        push(newPipe);
    }

    printf("%lld\n", totalCost);

    return 0;
}