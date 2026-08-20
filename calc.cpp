#include "calc.h"
#include <iostream>

int add(int x, int y)
{
 return x + y;
}

int sub(int x, int y)
{
 return x - y;
}

int mult(int x, int y)
{
 return x * y;
}

double divide(int x, int y)
{
 return (double)x / (double)y;
}

int gettingNum()
{
 std::cout << "Enter a number: ";
 int num{};
 std::cin >> num;

 return num;
}
