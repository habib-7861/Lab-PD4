#include <iostream>
using namespace std;
void num(int number);
void numbers(int number);
main()
{
    system("cls");
    int number;
    cout <<"Enter number: ";
    cin>>number;
    num(number);
    cout <<endl;
    numbers(number);
}
void num(int number)
{
    for(int num = 1;num <= number;num = num + 1)
    {
        cout <<num<<endl;
    }
}
void numbers(int number)
{
    int x = 0;
    while(x<number)
    {
        x = x+1;
        cout <<x<<endl;
    }
}