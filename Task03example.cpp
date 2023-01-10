#include <iostream>
#include <cmath>
using namespace std;
main()
{
  int num1,num2,result;
  system("cls");
  cout <<"Enter num1: ";
  cin >>num1;
  cout <<"Enter num2: ";
  cin >>num2;
  result = max(num1,num2);
  cout <<"The maximum number is: "<<result;
  return 0;
} 
