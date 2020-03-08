#include <iostream>

void myDate(char *str);
void myDate(int, int, int);

int main()
{
    myDate("20th Apr 2003");
    myDate(4, 20, 2003);

    return 0;
}

void myDate(char *str)
{
    std::cout << "Date: " << str << std::endl;
}

void myDate(int month, int day, int year)
{
    std::cout << "Date: " << month << "/" << day << "/" << year << std::endl;
}
