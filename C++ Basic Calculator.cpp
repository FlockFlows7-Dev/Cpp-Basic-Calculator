#include <iostream>
using namespace std;

int main() {
    double FirstNum;
    double SecondNum;
    double sum;
    string operation;

    cout << "(Basic Calculator)" << endl;
    cout << "Enter first number: ";
    cin >> FirstNum;
    cout << "Enter second number: ";
    cin >> SecondNum;
    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    if (operation == "+") 
    {
        sum = FirstNum + SecondNum;
        cout << "The result is: " << sum << endl;
    }
    else if (operation == "-") 
    {
        sum = FirstNum - SecondNum;
        cout << "The result is: " << sum << endl;
    }
    else if (operation == "*") 
    {
        sum = FirstNum * SecondNum;
        cout << "The result is: " << sum << endl;
    }
    else if (operation == "/") 
    {
        if (SecondNum == 0) {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        else 
        {
            sum = FirstNum / SecondNum;
            cout << "The result is: " << sum << endl;
        }
    }
    else 
    {
        cout << "Invalid operation. Please use +, -, *, or /." << endl;
    }

    return 0;
}
