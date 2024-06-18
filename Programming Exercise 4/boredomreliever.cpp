// File: boredomreliever.cpp
// Proponent: Rommel Rutherford M. Yong
// Subject: CMSC 28
#include <iostream>
using namespace std;

// Function to display program description
void programDescription() {
    cout << "This program converts a decimal number to its binary equivalent.\n"; // Show program description
}

// Function to read input from user
void readInput(int &num) {
    cout << "\nEnter an integer: "; // Ask user for integer input
    cin >> num; // User adds input here
}

// Function to convert decimal to binary
void convertToBinary(int num, int binary[], int &size) {
    size = 0; // Set size of binary to 0

    // Loop for converting decimal to binary
    while (num > 0) {
        binary[size] = num % 2; // Add remainder of number divided by 2 into the binary expression 
        num = num / 2; // Divide number by 2 to get the next binary number
        size++; // Increase size of binary by 1
    }
}

// Function to display the binary equivalent of decimal number
void showOutput(int num, int binary[], int size) {
    cout << "\nDecimal number: " << num << "\n"; // Show decimal number
    cout << "Binary equivalent: "; // Show binary equivalent
    // Loop for displaying binary equivalent
    for (int i = size - 1; i >= 0; i--) {
        cout << binary[i]; // Add array for binary equivalent
    }
    cout << "\n"; // Add empty space
}

// Main function
int main() {
    int num; // Decimal Number
    int binary[32]; // 32 bits binary
    int size; // Number of bits in binary

    programDescription(); // Run program description
    readInput(num); // Read input of user
    convertToBinary(num, binary, size); // Convert input of user to binary
    showOutput(num, binary, size); // Show decimal and binary input of user

    return 0; // Program termination
}