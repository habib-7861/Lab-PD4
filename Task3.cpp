#include <iostream>
using namespace std;
bool isGreater(int,int);
main()
{
  system("cls");
  int num1,num2,num3;
  bool isTrue;
  cout <<"Enter number1: ";
  cin >>num1;
  cout <<"Enter number2: ";
  cin >>num2;
  cout <<"Enter number3: ";
  cin >>num3;
  isTrue = isGreater(num1,num2);
  if(isTrue == true)
  {
    cout <<"A is symmetric"<<isTrue;
  }
  if(isTrue == false)
  {
    cout <<"A is not symmetric"<<isTrue;
  }
}

bool isGreater(int num1,int num2)
{
  if(num1 == num3)
  {
    return true;
  }
}