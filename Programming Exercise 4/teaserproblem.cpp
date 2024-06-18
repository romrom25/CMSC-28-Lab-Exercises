// File: teaserproblem.cpp
// Proponent: Rommel Rutherford M. Yong
// Subject: CMSC 28
#include <iostream>
using namespace std;

// Function to display program description
void programDescription() {
    cout << "This program finds the highest and lowest of three input numbers and outputs their difference.\n"; // Show program description
}

// Function to read inputs from user
void readInput(int &x, int &y, int &z) {
    cout << "\nEnter first number: ";
    cin >> x; // User inputs first number here
    cout << "Enter second number: ";
    cin >> y; // User inputs second number here
    cout << "Enter third number: ";
    cin >> z; // User inputs third number here
}

// Function to determine the highest of three numbers
int getLargest(int x, int y, int z) {
    int maximum = x; // Make x the maximum
    if (y > maximum) maximum = y; // Check if y is greater than x
    if (z > maximum) maximum = z; // Check if z is greater than either x or y
    return maximum; // Return the maximum value
}

// Function to determine the lowest of three numbers
int getSmallest(int x, int y, int z) {
    int minimum = x; // Make x the minimum
    if (y < minimum) minimum = y; // Check if y is less than x
    if (z < minimum) minimum = z; // Check iff z is less than either x or y
    return minimum; // Return the minimum value
}

// Function to display the output of program
void showOutput(int x, int y, int z, int largest, int smallest, int diff) {
    cout << "\nNumbers entered: " << x << ", " << y << ", " << z << "\n"; // Show the numbers entered by user
    cout << "Largest number: " << largest << "\n"; // Show the largest number
    cout << "Smallest number: " << smallest << "\n"; // Show the smallest number
    cout << "Difference: " << diff << "\n"; // Show the difference between the largest and smallest number
}

// Main function
int main() {
    int x, y, z, largestValue, smallestValue, difference; // Initializing variables

    programDescription(); // Show program description
    readInput(x, y, z); // Get user inputs
    largestValue = getLargest(x, y, z); // Get largest number
    smallestValue = getSmallest(x, y, z); // Get smallest number
    difference = largestValue - smallestValue; // Get the difference of largest and smallest number
    showOutput(x, y, z, largestValue, smallestValue, difference); // Show the output of the program to the user

    return 0; // Program termination
}