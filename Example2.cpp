#include <iostream>
using namespace std;
int mini(int num1,int num2);
main()
{
  system("cls");
  int num1,num2,result;
  cout <<"Enter num1; ";
  cin >>num1; 
  cout <<"Enter num2; ";
  cin >>num2;
  result = mini(num1,num2);
  cout <<result<<" is minimum number";
}

int mini(int num1,int num2)
{
  if(num1 < num2)
  {  
  return num1;  
  }
    if(num2 < num1)
  {
     return num2;  
  }
  return 0;
}