#include <iostream>
using namespace std;
void add();
void mul();
main()
{
  add();
  mul();
  add();
  mul();
}
void add()
{
  int num1;
  int num2;
  int sum;
  cout <<"Enter num1: ";
  cin >>num1;
  cout <<"Enter num2: ";
  cin >>num2;
  sum = num1 + num2;
  cout <<"The sum of the integers is: "<<sum<<endl;
}

void mul()
{
  int num3;
  int num4;
  int mult;
  cout <<"Enter num3: ";
  cin >>num3;
  cout <<"Enter num4: ";
  cin >>num4;
  mult = num3 * num4;
  cout <<"The mult. of the integers is: "<<mult<<endl;
}

