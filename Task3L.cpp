#include <iostream>
using namespace std;
void add(int num1 , int num2);
main()
{
  system("cls");
  add(4,5);
}

void add(int num1 , int num2)
{
  int sum;
  sum = num1 + num2;
  cout <<"The sum of numbers is: "<<sum;
}