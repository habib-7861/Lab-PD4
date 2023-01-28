#include <iostream>
using namespace std;
int frequencyChecker(int number,int digit);
main()
{
    int number;
    int digit;
    cout <<"Enter number: ";
    cin >>number;
    cout <<"Enter digit: ";
    cin >>digit;
    int result = frequencyChecker(number,digit);
    cout <<result;
}
int frequencyChecker(int number,int digit)
{
    int count = 0;
    while(number > 0)
    {
        int a = number%10;
        number = number/10;
        if( a==digit)
        {
            count = count + 1;
        }
    }
    return count;
}