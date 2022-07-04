#include <iostream>

int opsel();

void newLine()
{
	std::cout << "\n";
}

void petn()		// used in opselcaller() to ask user for two numbers
{
	std::cout << "\nPlease enter two numbers\n\n";
}

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

double numbersel()
{
	double num{};
	std::cin >> num;
	return num;
}


void opselcaller(int x)
{
	if (x == 1)
	{
		std::cout << "You have chosen Addition!\n";
		petn();
		addition(numbersel(), numbersel());
		opselcaller(opsel());
	}
	else if (x == 2)
	{
		std::cout << "You have chosen Subtraction!\n";
		petn();
		subtraction(numbersel(), numbersel());
		opselcaller(opsel());
	}
	else if (x == 3)
	{
		std::cout << "You have chosen Multiplication!\n";
		petn();
		multiplication(numbersel(), numbersel());
		opselcaller(opsel());
	}
	else if (x == 4)
	{
		std::cout << "You have chosen Division!\n";
		petn();
		division(numbersel(), numbersel());
		opselcaller(opsel());
	}
	else if (x == 5)
	{
		std::cout << "\nGoodbye...\n";
		exit;
	}
	else
	{
		std::cout << "That is not a valid selection!\n\n";
		opselcaller(opsel());
	}
}

int opsel()
{
	std::cout << "+-----------------------------------------------------+\n";
	std::cout << "|Please enter the operation you would like to compute!|\n";
	std::cout << "|-----------------------------------------------------|\n";
	std::cout << "|1) Addition					      |\n";
	std::cout << "|2) Subtraction					      |\n";
	std::cout << "|3) Multiplication				      |\n";
	std::cout << "|4) Division					      |\n";
	std::cout << "|5) Exit					      |\n";
	std::cout << "+-----------------------------------------------------+\n";

	int sel{};

	std::cin >> sel;

	return sel;
}

int main()
{
	opselcaller(opsel());

	return 0;
}