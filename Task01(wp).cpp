#include <iostream>
using namespace std;
int add(int num1,int num2);
main()
{
  system("cls");
  int num1,num2,result;
  cout <<"Enter number1 : ";
  cin >>num1;
  cout <<"Enter number1 : ";
  cin >>num1;
  result = add(num1,num2);
  cout <<"The sum of numbers is: "<<result;
}
int add(int num1,int num2)
{
  int sum;
  sum = num1 + num2;
  return sum;
}