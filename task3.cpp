#include <iostream>
using namespace std;
int digits(int number);
main()
{
    system("cls");
    int number;
    cout <<"Enter number: ";
    cin >>number;
    int result = digits(number);
    cout <<result;
}
int digits(int number)
{
    int count = 0;
    while(number > 0)
    {
        count = count + 1;
        number = number / 10;
    }
    return count;
}