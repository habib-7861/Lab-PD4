#include <iostream>
using namespace std;
int sum(int number);
main()
{
    int number;
    cout <<"Enter number: ";
    cin >>number;
    int result = sum(number);
    cout <<result;
}
int sum(int number)
{
    int sum = 0;
    for(int count = 1;count <=number;count = count + 1)
    {
        sum = sum + count;
    }
    return sum;
}