#include <iostream>
#include <windows.h>
using namespace std;
void integer(int num1 , int num2);
int num1;
int num2;
main()
{
  system("cls"); 
  integer(num1,num2); 
}

void integer(int num1 , int num2)
{
  cout <<"Enter num1: ";
  cin >>num1;
  cout <<"Enter num2: ";
  cin >>num2;
  if(num1 == num2)
  {
    cout <<"True";
  }  
    if(num1 != num2)
  {
    cout <<"False";
  }  

}