#include <iostream>

int main() {
    int income;
    std::cout << "Enter your income: ";
    std::cin >> income;
    int tax = 0;


    if (income > 50000)
    {
        tax += (income - 50000) * 0.3;
        income = 50000;
    }
    if (income > 10000)
    {
        tax += (income - 10000) * 0.2;
        income = 10000;
    }
    if (income > 0)
        tax += income * 0.13;
    else std::cout << "Incorrect input!!!" << std::endl;

    std::cout << "The tax will be equal: " << tax << std::endl;





}
