#include <iostream>
#include <cmath>
using namespace std;
main()
{
  int num1,num2,result;
  cout <<"Enter number1: ";
  cin>>num1;
  cout <<"Enter number2: ";
  cin>>num2;
  result = min(num1,num2);
  cout <<"The minimum number is: "<<result;
  return 0;
}
