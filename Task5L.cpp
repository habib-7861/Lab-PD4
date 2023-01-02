#include <iostream>
using namespace std;
void sum(int num1, int num2);
int num1;
int num2;
char op;
int add;
main()
{
  system("cls");
  sum( num1, num2);
  if(op == '+')
  {
    cout <<"The sum is: "<<add;
  }
}
void sum(int num1, int num2)
{
  cout <<"Enter number1: ";
  cin>>num1;
  cout <<"Enter number2: ";
  cin>>num2;
  cout <<"Enter operator: ";
  cin>>op; 
  add = num1 + num2; 
}