// Programming Exercise 2
// Proponent: Rommel Rutherford M. Yong
// Date: 03/25/2024

// Libraries to be used in the program
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Define a structure for a node in the stack
struct Node {

    // Create variable for kitchenware
    char kitchenware[50];

    // Create pointer to next node
    struct Node* next;
};

// Name the struct Node
typedef struct Node Node;

// Function declarations

// Create new node to allocate kitchenware
Node* NEWNODE(char* kitchenware);

// Pushes newly inputted kitchenware into the stack
void PUSH(char* kitchenware, Node** stack);

// Pops newly inputted kitchenware out of the stack
char* POP(Node** stack);

// Checks if stack is full
bool full(Node* stack);

// Checks if stack is empty
bool empty(Node* stack);

// Checks the kitchenware on top of the stack
char* top(Node* stack);

// Remove all kitchenwares in the stack
void makeNull(Node** stack);

int main() {
    Node* stack = NULL; // Declare a stack for kitchenware

    int choice; // Variable to store user's choice

    // Main Menu of Kitchenware Washing Machine
    do {
        // Ask user for kitchenware washing machine input
        printf("\nKitchenware Washing Machine\n");
        printf("[1] Add kitchenware\n");
        printf("[2] Wash kitchenware\n");
        printf("[3] Top kitchenware\n");
        printf("[4] Wash all\n");
        printf("[0] Exit\n");

        // User inputs here
        printf("Enter choice: ");
        scanf("%d", &choice);

        // Clear input buffer
        while(getchar() != '\n'); 

        // Switch expression for every choice of user
        switch (choice) {

            // Adding kitchenware
            case 1: {

                // Create variable for kitchenware
                char item[50];

                // Check if stack is full
                if (full(stack)) {
                    printf("The STACK is FULL. Cannot add kitchenware.\n");
                }

                // Ask kitchenware input
                else {
                    // Ask user kitchenware to be added
                    printf("Enter kitchenware: ");
                    scanf("%s", item);

                    // Clear input buffer
                    while(getchar() != '\n');

                    // Push the inputted kitchenware into the stack
                    PUSH(item, &stack);
                    printf("Kitchenware %s is added.\n", item);
                }
                
                // Proceeds to next part of program after switch expression
                break;
            }

            // Washing kitchemware
            case 2: {

                // Check if kitchenware stack is empty
                if (empty(stack)) {
                    printf("The STACK is EMPTY. No more kitchenware to wash.\n");
                } 
                
                // Informs user last inputted kitchenware is being washed
                else {
                    printf("%s is being washed.\n", POP(&stack)); 
                }

                // Proceeds to next part of program after switch expression
                break;
            }

            // Checking top of kitchenware (last inputted kitchenware)
            case 3: {

                // Check if kitchenware stack is empty
                if (empty(stack)) {
                    printf("The STACK is EMPTY. No kitchenware to wash.\n");
                } 
                
                // Informs user the next kitchenware to be washed
                else {
                    printf("%s is next to be washed.\n", top(stack)); 
                }

                // Proceeds to next part of program after switch expression
                break;
            }

            // Washing all kitchenwares
            case 4: {

                // Check if kitchenware stack is empty
                if (empty(stack)) {
                    printf("The STACK is EMPTY. No kitchenware to wash.\n");
                } 
                
                
                else {

                    // Begin washing all kitchenware
                    printf("Washing all kitchenware:\n");

                    // Washing each kitchenware in the stack until stack is empty
                    while (!empty(stack)) {
                        printf("%s is being washed.\n", POP(&stack));
                    }

                    // Informs user all kitchenwares have been washed
                    printf("All kitchenware has been washed.\n");
                }

                // Proceeds to next part of program after switch expression
                break;
            }

            // Exiting program
            case 0: {
                
                // Informs user program is being exited
                printf("Exiting the program. Washing machine process terminated.\n");

                // Proceeds to next part of program after switch expression
                break;
            }

            // User inputting other choice
            default:

                // Informs user choice is invalid
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 0); // Continue until user inputs 0 or selects Exit

    // Program terminates
    return 0;
}

// Function to create a new node
Node* NEWNODE(char* kitchenware) {

    // Allocate memory for a new node
    Node* newNode = (Node*)malloc(sizeof(Node)); 

    // Check if memory is successfully allocated
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    // Copy the kitchenware name to the new node
    strcpy(newNode->kitchenware, kitchenware); 
    newNode->next = NULL;

    // Return the new node
    return newNode;
}

// Function to push an item onto the stack
void PUSH(char* kitchenware, Node** stack) {

    // Create new node for new kitchenware
    Node* newNode = NEWNODE(kitchenware);

    // Set the next pointer of the new node to the current top of the stack
    newNode->next = *stack; 

    // Update top of the stack to point to the new node
    *stack = newNode; 
}

// Function to pop an item from the stack
char* POP(Node** stack) {

    // Check if stack is empty
    if (empty(*stack)) {

        // Return NULL if stack is empty
        return NULL; 
    }

    // Create temporary variable to store top node
    Node* temp = *stack;

    // Store the kitchenware name of the top node
    char* kitchenware = strdup(temp->kitchenware);

    // Update top of stack to point to the next node
    *stack = temp->next;

    // Free memory allocated by the popped node
    free(temp);

    // Return the name of kitchenware of the popped node
    return kitchenware;
}

// Function to check if the stack is full (assuming dynamic allocation)
bool full(Node* stack) {
    return false; // Linked list implementation does not have a fixed capacity
}

// Function to check if the stack is empty
bool empty(Node* stack) {
    return stack == NULL; // If top is NULL, stack is empty
}

// Function to return the kitchenware name of the top item in the stack
char* top(Node* stack) {

    // Check if stack is empty
    if (empty(stack)) {

        // Return NULL if stack is empty
        return NULL; 
    }

    // Return the kitchenware name of the top node
    return stack->kitchenware; 
}

// Function to make the stack empty
void makeNull(Node** stack) {

    // Pop each item in the stack until stack is empty
    while (!empty(*stack)) {
        POP(stack);
    }
}