#include <stdio.h>

unsigned int isLeap(unsigned int year);
void printStatus(unsigned int year);

int main(void)
{
    printStatus(2020);
    printStatus(2100);
    printStatus(2021);
    return 0;
}

unsigned int isLeap(unsigned int year)
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return 1;
    return 0;
}

void printStatus(unsigned int year)
{
    if (isLeap(year))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);
}
