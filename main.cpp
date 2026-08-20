#include <iostream>
#include "calc.h"

int main()
{
    // Console Calculator

    // Asking user for operation
    std::cout << "(+) Addition" << '\n';
    std::cout << "(-) Substraction" << '\n';
    std::cout << "(*) Multiplication" << '\n';
    std::cout << "(/) Division" << '\n';

    // Asking user for operand
    std::cout << "\nEnter an operand(+ - * /): ";
    char operand{};
    std::cin >> operand;

    std::cout << '\n';

    // Defining logic
    switch(operand)
    {
    case '+':
    {
     int num1{ gettingNum() };
     int num2{ gettingNum() };

     std::cout << num1 << " + " << num2 << " = " << add(num1, num2) << '\n';
     break;
    }

    case '-':
    {
     int num1{ gettingNum() };
     int num2{ gettingNum() };

     std::cout << num1 << " - " << num2 << " = " << sub(num1, num2) << '\n';
     break;
    }

    case '*':
    {
     int num1{ gettingNum() };
     int num2{ gettingNum() };

     std::cout << num1 << " * " << num2 << " = " << mult(num1, num2) << '\n';
     break;
    }

    case '/':
    {
     int num1{ gettingNum() };
     int num2{ gettingNum() };

     std::cout << num1 << " / " << num2 << " = " << divide(num1, num2) << '\n';
     break;
    }

    default:
     std::cout << "Enter the valid operands!" << '\n';
    }

    // ending lines
    std::cout << "*****************************************" << '\n';



    return 0;
}
