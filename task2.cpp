#include <iostream>
using namespace std;
void printFibonacci(int number);
main()
{
    system("cls");
    int number;
    cout <<"Enter number: ";
    cin>>number;
    printFibonacci(number);
}
void printFibonacci(int number)
{
    int num1 = 0;
    int num2 = 1;
    int x;
    cout <<num1<<" , "<<num2;
    for(int count = 1;count <= number - 2;count = count+1)
    {
        x = num1+num2;
        cout<<" , " <<x;
        num1 = num2;
        num2 = x;
    }
}