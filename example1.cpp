#include <iostream>
using namespace std;
void add(int num1, int num2);
void mult(int num3, int num4);
main()
{
  int num1;
  int num2;
  int num3;
  int num4;
  cout <<"number1 : ";  
  cin >>num1;
  cout <<"number2 : ";
  cin >>num2;
  add(num1 , num2);
  cout <<"number3 : ";  
  cin >>num3;
  cout <<"number4 : ";
  cin >>num4;
  mult(num3 , num4);
}
void add(int num1, int num2)
{
  int sum;
  sum = num1 + num2;
  cout <<"sum: "<<sum<<endl;
}

void mult(int num3, int num4)
{
  int mul;
  mul = num3 * num4;
  cout <<"multiply: "<<mul;
}