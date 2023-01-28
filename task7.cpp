#include <iostream>
using namespace std;
int num(int number);
main()
{
    int number;
    cout <<"Enter number: ";
    cin >>number;
    number = num(number);
}
int num(int number)
{
    number =0;
    while(number <=0 )
    {
    cout <<"Enter positive numbr.not negative nuber."<<endl;
    cout <<"Enter number: ";
    cin >>number;
    }
    return number;
}