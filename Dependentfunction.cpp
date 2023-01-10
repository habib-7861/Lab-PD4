#include <iostream>
using namespace std;
void add(int num1,int num2);
void devide(float num1,float num2);
main()
{
  int num1,num2;
  cout <<"Enter number1: ";
  cin >>num1;
  cout <<"Enter numbwer2: ";
  cin >>num2;
  add(num1,num2);
  devide(num1,num2);
}

void add(int num1,int num2)
{
  int sum = num1 + num2;
  cout <<"Sum: "<<sum<<endl;
}

void devide(float num1,float num2)
{
  float devision = num1/num2;
  cout <<"Devision is: "<<devision;
}