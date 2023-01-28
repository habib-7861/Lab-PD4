#include <iostream>
using namespace std;
int sum(int number);
main()
{
    system("cls");
    int number;
    cout <<"Enter number: ";
    cin>>number;
    int result = sum(number);
    cout <<result;
}
int sum(int number)
{
    int sum1 = 0;
    while(number > 0)
    {
        int a = number%10;
        number = number/10;
        sum1 = sum1 + a;
    }
    return sum1;
}