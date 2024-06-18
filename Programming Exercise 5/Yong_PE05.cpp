// CMSC 28 - Laboratory Exercise 5
// Proponent: Yong, Rommel Rutherford M.
// Date: 05/10/2024

// Built-in Functions to Use
#include <iostream>
#include <cmath>

// Array size initialization
const int ARRAY_SIZE = 10;

// User defined functions to be used
// Function to input data in the array
void inputData(int num[]);

// Function to find maximum value in the array
int findMaximum(int num[]);

// Function to find minimum value in the array
int findMinimum(int num[]);

// Function to get average of the values in the array
double findAverage(int num[]);

// Function to get variance of the values in the array
double findVariance(int num[], double average);

// Function to get standard deviation of the values in the array
double findStandardDeviation(double variance);

// Function to output the required values in the array
void outputData(int max, int min, double average, double variance, double stdDev);

int main() {

    // Creating an array
    int num[ARRAY_SIZE];

    // Actual parameter of inputting data
    inputData(num);

    // Variable for storing maximum value in array
    int max = findMaximum(num);

    // Variable for storing minimum value in array
    int min = findMinimum(num);

    // Variable for storing average 
    double average = findAverage(num);

    // Variable for storing variance
    double variance = findVariance(num, average);

    // Variable for storing standard deviation
    double stdDev = findStandardDeviation(variance);

    // Actual parameter of data outputs 
    outputData(max, min, average, variance, stdDev);

    // Program termination
    return 0;
}

// Function to input data into the array
void inputData(int num[]) {

    // Loop for inputting integers
    for (int i = 0; i < ARRAY_SIZE; i++) {

        // Inform user to input integers
        std::cout << "Enter integers: ";

        // User inputs integers here
        std::cin >> num[i];
    }
}

// Function to find the maximum value
int findMaximum(int num[]) {

    // Assign maximum value to first value
    int max = num[0];

    // Check each value in array
    for (int i = 1; i < ARRAY_SIZE; i++) {

        // Check if current value in current index is bigger than the maximum value
        if (num[i] > max) {

            // Changes the value of maximum value to the current value in the loop
            max = num[i];
        }
    }

    // Return the maximum value
    return max;
}

// Function to find the minimum value
int findMinimum(int num[]) {

    // Assign minimum value to first value
    int min = num[0];

    // Check each value in array
    for (int i = 1; i < ARRAY_SIZE; i++) {

        // Check if current value in current index is smaller than the minimum value
        if (num[i] < min) {

            // Changes the value of minimum value to the current value in the loop
            min = num[i];
        }
    }

    // Return the minimum value
    return min;
}

// Function to find the average
double findAverage(int num[]) {

    // Create variable for sum of the values
    double sum = 0;

    // Create variable for counter
    int counter = 0;

    // Loops through each value in the array
    for (int i = 0; i < ARRAY_SIZE; i++) {
        
        // Adds each value in the array
        sum += num[i];

        // Increments every loop to check how many numbers in the array
        counter++;
    }

    // Returns average, which is equal to sum divided by count
    return sum / counter;
}

// Function to find the variance
double findVariance(int num[], double average) {

    // Create variable for the sum of the squared difference of the value and average
    double sumSquaredDifference = 0;

    // Create variable for the number of values in the array
    int counter = 0;

    // Loops through each value in the array
    for (int i = 0; i < ARRAY_SIZE; ++i) {

        // Compute for the sum of the squared difference of the value and average
        sumSquaredDifference += (num[i] - average) * (num[i] - average);
        
        // Increments every loop to check how many numbers in the array
        counter++;
    }

    // Return the quotient of the sum of the squared difference and count
    return sumSquaredDifference / counter;
}

// Function to find the standard deviation
double findStandardDeviation(double variance) {

    // Return the square root of the variance, which is equal to the standard deviation
    return sqrt(variance);
}

// Function to output the data
void outputData(int max, int min, double average, double variance, double stdDev) {

    // Outputs details of outputs
    std::cout << "\nOutputs:\n";

    // Outputs the maximum value of the array
    std::cout << "Maximum Value: " << max << std::endl;

    // Outputs the minimum value of the array
    std::cout << "Minimum Value: " << min << std::endl;

    // Outputs the average of the array
    std::cout << "Average: " << average << std::endl;

    // Outputs the variance of the array
    std::cout << "Variance: " << variance << std::endl;

    // Outputs the standard deviation of the array
    std::cout << "Standard Deviation: " << stdDev << std::endl;
}