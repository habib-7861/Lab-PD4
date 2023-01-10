#include <iostream>
using namespace std;
int add(int num1 , int num2);
float devide(float num1,float num2);
main()
{
  system("cls");
  float result;
  result = add(12,6);
  cout <<"Result is: "<<result<<endl;
  result = devide(20.5,5.5);
  cout <<"Result is: "<<result;
}

int add(int num1 , int num2)
{
  int sum = num1 + num2;
  return sum;
}

float devide(float num1,float num2)
{
  float devision = num1 / num2;
  return devision;
}