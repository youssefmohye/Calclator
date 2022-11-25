/*
	  Name: CALCULATOR v1.0
	  Author: Youssef Mohye
      Date: 23-11-22 10:57 PM
      Description: A simple calculator that can add, subtract multiply, divide
*/


#include <iostream>
using namespace std;

int main() {
	char op;
	int num1, num2;
	cout << "Enter The first Number :";
	cin >> num1;
	
	cout << "Enter operator: +,-,*,/ : ";
	cin >> op;

	cout << "Enter The second Number : ";
	cin >> num2;

	switch (op)
	{
	case '+':
			cout << num1 << "+" << num2 << " = " << num1 + num2;
			break;

	case '-':
		cout << num1 << "-" << num2 << " = " << num1 - num2;
		break;

	case '*':
		cout << num1 << "*" << num2 << " = " << num1 * num2;
		break;

	case '/':
		cout << num1 << "/" << num2 << " = " << num1 / num2;
		break;
	default:
		cout << "ERROR! Opetator in not correct";
		break;
	}
	return 0;
}