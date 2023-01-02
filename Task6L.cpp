#include <iostream>
using namespace std;
void algebra(int , int);
int num1;
int num2;
char op;
int sum;
int mult;
int sub;
float devi;
main()
{
  system("cls");
  
  while(true)
  {
    algebra(num1,num2);
    if(op == '+')
    {
      cout <<"sum: "<<sum<<endl;
    } 
    if(op == '*')
    {
      cout <<"Multiplication: "<<mult<<endl;
    }
    if(op == '-')
    {
      cout <<"subtraction: "<<sub<<endl;
    }
    if(op == '/')
    {
      cout <<"Devision: "<<devi<<endl;
    }
  } 
}

void algebra(int num1,int num2)
{
  cout <<"Enter number1: "; 
  cin>>num1;
  cout <<"Enter number1: "; 
  cin>>num2;
  cout <<"Enter operator: ";
  cin>>op;
  sum = num1 + num2;
  mult = num1*num2;
  sub = num1-num2;  
  devi = num1/num2;
}