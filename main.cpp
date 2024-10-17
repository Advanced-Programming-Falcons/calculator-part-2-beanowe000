#include <iostream>
using namespace std;

int main() {
    int num1, num2, result;
    char operation;

    // Ask the user for input
    cout << "Enter a calculation: ";
    cin >> num1 >> operation >> num2;

    // Perform the calculation based on the operation
    if (operation == '+') {
        result = num1 + num2;
        cout << "Result: " << result << endl;
    } 
    else if (operation == '-') {
        result = num1 - num2;
        cout << "Result: " << result << endl;
    } 
    else if (operation == '*') {
        result = num1 * num2;
        cout << "Result: " << result << endl;
    } 
    else if (operation == '/') {
        if (num2 == 0) {
            cout << "Error: Division by zero is not allowed." << endl;
        } else {
            result = num1 / num2;
            cout << "Result: " << result << endl;
        }
    } 
    else {
        cout << "Invalid operation. Please use +, -, *, or /." << endl;
    }

    return 0;
}