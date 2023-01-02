#include <iostream>
using namespace std;
void number();
int num;
main()
{
  system("cls");
  number();
  if(num>=50)
  {
    cout <<"Pass";
  }
  if(num<50)
  {
    cout <<"Fails";
  }
}
void number()
{
  cout <<"Enter number: ";
  cin>>num;
}