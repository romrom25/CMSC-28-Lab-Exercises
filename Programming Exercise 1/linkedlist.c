// Laboratory Exercise 1
// Proponent: Rommel Rutherford M. Yong
// Date: 03/17/2023

// Libraries to be used by the program
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to define each node in the list
struct Node {
    // Create string for storing data of each node in the linked list
    char data[100];

    // Create pointer using type struct Node
    struct Node *next;
};

// Functions to be used by the program

// Function for adding items
void addItem(struct Node **head);

// Function for deleting items
void deleteItem(struct Node **head);

// Function to display current list
void displayList(struct Node *head);

// Function to delete current list
void deleteList(struct Node **head);

// Main Function
int main() {

    // Initialize an empty linked list
    struct Node *head = NULL; 

    // Create variable to store choice of user
    int choice;

    // Loops until user inputs 0
    do {
        // Display the main menu of the program
        printf("\nList MENU\n\n");
        printf("[1] Add Item\n");
        printf("[2] Delete Item\n");
        printf("[3] Display List\n");
        printf("[4] Delete List\n");
        printf("[0] Exit Program\n\n");

        // Loops choice input until user inputs a valid input
        do {
            // User inputs choice here
            printf("Enter choice: ");
            scanf("%d", &choice);

            // Check if user choice is less than 0 or greater than 4
            if (choice < 0 || choice > 4) {
                
                // Informs user that input is invalid
                printf("Invalid choice. Please enter a number between 0 and 4.\n");
            }
        } while (choice < 0 || choice > 4);

        // Create a switch based on choice of user
        switch(choice) {

            // If input is equal to 1
            case 1:
                // Calls the function to add an item
                addItem(&head);

                // Breaks the switch expression 
                break;

            // If input is equal to 2
            case 2:
                // Calls the function to delete an item
                deleteItem(&head);

                // Breaks the switch expression 
                break;

            // If input is equal to 3
            case 3:
                // Calls the function to display the list
                displayList(head);

                // Breaks the switch expression 
                break;
            
            // If input is equal to 4
            case 4:
                // Calls the function to delete the list
                deleteList(&head);

                // Breaks the switch expression 
                break;
            
            // If input is equal to 0
            case 0:
                // Informs the user the program is exited
                printf("Exiting program...\n");

                // Breaks the switch expression
                break;

            // If input is none of the given choices
            default:
                // Informs the user to input valid choice
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 0);

    // Terminates program when choice input is 0
    return 0;
}

// Function to add item to the list
void addItem(struct Node **head) {
    // Create variable for input of user
    char item[50];
    
    // Create variable for choice of user
    int choice;

    // Create a dynamic array with the data type being the struct Noded
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    // Check if node is created and memory allocation is successful
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    // Ask user to enter item to be added
    printf("Enter the item to be added: ");
    scanf("%s", item);

    // Copy the item into the data field of the newNode structure
    strcpy(newNode->data, item);
    
    // Loops choice input until user inputs a valid input
    do {

        // Ask user the location of where to add the item
        printf("Where to add the item?\n");
        printf("[1] Start of the list\n");
        printf("[2] End of the list\n");
        printf("[3] Specific position\n");
        printf("[0] Cancel\n");

        // User inputs choice here
        printf("Enter choice: ");
        scanf("%d", &choice);

        // Check if user choice is less than 0 or greater than 3
        if (choice < 0 || choice > 3) {
            // Program informs user to input valid choice
            printf("Invalid choice. Please enter a number between 0 and 3.\n");
        }
    } while (choice < 0 || choice > 3);

    // Check if choice is equal to 1
    if (choice == 1) {
        // Next pointer of newNode points to the current head of the list
        newNode->next = *head;
        // Update head pointer to point to the newNode
        *head = newNode;
        // Informs user that input is added to the start of the list
        printf("Item is now added to the start of the list.\n");
    } 
    
    // Check if choice is equal to 2
    else if (choice == 2) {
        // Next pointer of newNode points to NULL in order to terminate the list
        newNode->next = NULL;

        // Check if list is empty
        if (*head == NULL)
            // Head pointer then points to the newNode
            *head = newNode;
        
        // Adding a new node in the end of the list
        else {
            // Create a temporary pointer and initialize to point to the head of the list
            struct Node *temp = *head;

            // Make the temporary pointer point to the last node
            while (temp->next != NULL) temp = temp->next;

            // Next pointer points to the newNode
            temp->next = newNode;
        }
        
        // Informs user that input is added to the end of the list
        printf("Item is now added to the end of the list.\n");
    } 
    
    // Check if choice is equal to 3
    else if (choice == 3) {

        // Create variables pos and count to indicate position and counter
        int pos, count = 1;

        // Ask user where to add the item
        printf("Enter the position where to add the item: ");
        scanf("%d", &pos);

        // Check position input of user
        // If position input is less than or equal to 0
        if (pos <= 0) {

            // Informs user to add item at the end of the list
            printf("Invalid position. Adding at the end of the list.\n");
            choice = 2;
        } 
        
        // If position input is greater than 0
        else {

            // Create a temporary pointer that points to the head pointer
            struct Node *temp = *head;

            // Make the temporary pointer point to the last node
            while (temp != NULL && count < pos - 1) {
                temp = temp->next;
                count++;
            }

            // Next pointer of newNode is set to point to the current node
            newNode->next = temp->next;

            // Next pointer of temporary node points to newNode
            temp->next = newNode;
            
            // Informs user that input is added to the given position of the list
            printf("Item is now added to position %d of the list.\n", pos);
        }
    } 
    
    // Check if input is equal to 0
    else {
        // Cancels current operation
        printf("Cancelled.\n");

        // Free newNode memory
        free(newNode);
    }
}

// Function to delete an item from the list
void deleteItem(struct Node **head) {

    // Create a string to store item that the user wants to delete
    char item[50];

    // Ask user which item to delete
    printf("Enter the item to be deleted: ");
    scanf("%s", item);

    // Initlaize temporary pointer that points to the head pointer
    struct Node *temp = *head;

    // Initialize prev pointer that points to NULL
    struct Node *prev = NULL;

    // Initialize position variable
    int pos = 1;

    // Check position of the selected item to be deleted
    while (temp != NULL && strcmp(temp->data, item) != 0) {
        
        // Updates prev pointer to point to the current noded
        prev = temp;

        // Temporary pointer points to the next node in the list
        temp = temp->next;

        // Increment position
        pos++; 
    }

    // Loops through the list until temp reaches end of list and item to be deleted is found
    while (temp != NULL && strcmp(temp->data, item) != 0) {

        // Updates prev pointer to point to temp
        prev = temp;

        // Updates temp to point to the next node
        temp = temp->next;
    }

    // Check if temp reaches end of list without finding item to be deleted
    if (temp == NULL) {
        // Informs user that list does not contain the inputted element
        printf("The list contains no such element.\n");
    }

    // If item to be deleted is found
    else {
        // Check if item to be deleted is found in the first node
        if (prev == NULL){
            // Update head pointer to point to the next node
            *head = temp->next;
        }
        
        // If item to be deleted is not in the first node
        else {
            // Remove temp in the list
            prev->next = temp->next;
        }

        // Informs user that item has been deleted
        printf("The element %s, which is at position %d, has been deleted.\n", temp->data, pos);

        // Free the memory allocated to the node allocated by the deleted item
        free(temp);
    }
}

// Function to display the content of the list
void displayList(struct Node *head) {

    // Check if list is empty
    if (head == NULL) {
        // Informs user that the list is empty
        printf("List is empty.\n");

        // Function is then terminated
        return;
    }

    // Program outputs list of the array
    printf("List:\n");

    // Create position to keep track of position of each node
    int position = 1;

    // Output each node in the list
    while (head != NULL) {

        // Prints position of the node in the list and its value
        printf("[%d] %s\n", position++, head->data);

        // Proceeds to the next node in the list
        head = head->next;
    }
    
    // Informs user that list is now displayed
    printf("The list has been successfully displayed.\n");
}

// Function to delete the entire list
void deleteList(struct Node **head) {
    // Creates a temporary pointer of type struct Node
    struct Node *temp;

    // Loop that empties the list
    while (*head != NULL) {

        // Assign value of head pointer into the temporary pointer
        temp = *head;

        // Updates head pointer to point to the next node
        *head = (*head)->next;

        // Free the memory allocated by current node pointed by the temporary pointer
        free(temp);
    }

    // Informs user that the list has been emptied
    printf("The list has been emptied!\n");
}