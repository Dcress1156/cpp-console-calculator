#include "shared.h"
#include <iostream>



void addition(double num1, double num2)
{
	std::cout << num2 << " + " << num1 << " = " << num2 + num1;
	newLine();
	newLine();
}

void subtraction(double num1, double num2)
{
	std::cout << num2 << " - " << num1 << " = " << num2 - num1;
	newLine();
	newLine();
}

void multiplication(double num1, double num2)
{
	std::cout << num2 << " * " << num1 << " = " << num2 * num1;
	newLine();
	newLine();
}

void division(double num1, double num2)
{
	std::cout << num2 << " / " << num1 << " = " << num2 / num1;
	newLine();
	newLine();
}