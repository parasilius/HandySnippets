#include <iostream>

bool isLeap(unsigned int year);
void printStatus(unsigned int year);

int main()
{
    printStatus(2020);
    printStatus(2100);
    printStatus(2021);
}

bool isLeap(unsigned int year)
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return true;
    return false;
}

void printStatus(unsigned int year)
{
    if (isLeap(year))
        std::cout << year << " is a leap year." << std::endl;
    else
        std::cout << year << " is not a leap year." << std::endl;
}
