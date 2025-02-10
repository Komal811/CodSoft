#include <iostream>

using namespace std;

int main()
{

int num1, num2;
char x;

while (true)
{

cout << "Enter the First Number: ";
cin >> num1;

cout << "Enter the Second Number: ";
cin >> num2;

cout << "Operations" << endl;
cout << "Press + for Addition" << endl;
cout << "Press - for Subtraction" << endl;
cout << "Press * for Multiplication" << endl;
cout << "Press / for Division" << endl;
cout << "Press r for Remainder" << endl;

cout << "Enter the Operation: ";
cin >> x;

if (x == '+')
cout << "Sum of the given two numbers are " << num1 + num2 << "." << endl;

else if (x == '-')
cout << "Subtraction of the given two number are " << num1 - num2 << "." << endl;

else if (x == '*')
cout << "Multiplication of the given two numbers are " << num1 * num2 << "." << endl;

else if (x == '/')
cout << "Division of the given two numbers are " << num1 / num2 << "." << endl;

else if (x == '%')
cout << "Remainder of the given two numbers are " << num1 % num2 << "." << endl;

else
cout << "Invalid Operation" << endl;

}

return 0;

}       
