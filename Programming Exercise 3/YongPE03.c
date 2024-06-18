#include <stdio.h>
#include <stdlib.h>

// Define max length of name
#define MAX_NAME_LENGTH 100

// Define a structure to represent each customer in the queue
typedef struct {
    char name[MAX_NAME_LENGTH];
    float total_amount;
} Customer;

// Define the queue data structure
typedef struct {
    Customer *customers;
    int front;
    int rear;
    int capacity;
    int size;
} Queue;

// Function to initialize a queue
Queue* initializeQueue(int capacity) {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->customers = (Customer*)malloc(capacity * sizeof(Customer));
    queue->front = 0;
    queue->rear = -1;
    queue->capacity = capacity;
    queue->size = 0;
    return queue;
}

// Function to check if the queue is empty
int isEmpty(Queue* queue) {
    return queue->size == 0;
}

// Function to add a customer to the queue
void enqueue(Queue* queue, char name[], float total_amount) {
    queue->rear = (queue->rear + 1) % queue->capacity;
    strcpy(queue->customers[queue->rear].name, name);
    queue->customers[queue->rear].total_amount = total_amount;
    queue->size++;
}

// Function to remove and return the first customer from the queue
Customer dequeue(Queue* queue) {

    // Check if queue is empty
    if (isEmpty(queue)) {
        printf("\nQueue is empty. Cannot dequeue.\n");
        exit(1);
    }

    else {
        Customer customer = queue->customers[queue->front];
        queue->front = (queue->front + 1) % queue->capacity;
        queue->size--;
        return customer;
    }
}

// Function to display the next customer in line
void nextCustomer(Queue* queue) {
    
    // Check if queue is empty
    if (isEmpty(queue)) {
        printf("\nThe QUEUE is EMPTY. No order to serve.\n");
    } 
    
    else {
        printf("\nNext order: For %s with total amount payable of %.4f.\n", queue->customers[queue->front].name, queue->customers[queue->front].total_amount);
    }
}

// Function to serve the next customer in line
void serveCustomer(Queue* queue) {
    
    // Check if queue is empty
    if (isEmpty(queue)) {
        printf("\nThe QUEUE is EMPTY. No orders to serve.\n");
    } 
    
    else {
        Customer customer = dequeue(queue);
        printf("\nhNow serving %s with total amount payable of %.4f.\n", customer.name, customer.total_amount);
    }
}

// Function to serve all remaining customers in the queue
void closingTime(Queue* queue) {
    if (isEmpty(queue)) {
        printf("\nThe QUEUE is EMPTY. No customer/s to serve.\n");
    } else {
        printf("Serving remaining customers:\n");
        while (!isEmpty(queue)) {
            serveCustomer(queue);
        }
        printf("\nAll customers have been served.\n");
    }
}

// Main Function
int main() {
    Queue* checkoutQueue = initializeQueue(1000);
    int choice;
    char name[MAX_NAME_LENGTH];
    float amount;

    while (1) {
        printf("\nEight-Eleven Counter 0:\n");
        printf("[1] Fall in line\n");
        printf("[2] Serve customer\n");
        printf("[3] Next customer\n");
        printf("[4] Closing time\n");
        printf("[0] Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter customer's last name: ");
                scanf("%s", name);
                printf("Enter total amount payable: ");
                scanf("%f", &amount);
                enqueue(checkoutQueue, name, amount);
                break;
            case 2:
                serveCustomer(checkoutQueue);
                break;
            case 3:
                nextCustomer(checkoutQueue);
                break;
            case 4:
                closingTime(checkoutQueue);
                break;
            case 0:
                printf("\nCheckout system terminated.\n");
                return 0;
            default:
                printf("\nInvalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}
