#include "operators.h"
#include "operatorselect.h"
#include "shared.h"
#include <iostream>



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