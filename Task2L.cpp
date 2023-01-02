#include <iostream>
using namespace std;
void sum();
main()
{
  system("cls");
  sum();
}

void sum()
{
  int num1 , num2;
  int add; 
  cout <<"Enter number 1: ";
  cin>>num1;
  cout <<"Enter number 2: ";  
  cin>>num2;
  add = num1 + num2;
  cout <<"The sum of numbers is: "<<add<<endl;
}