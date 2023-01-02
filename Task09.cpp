#include <iostream>
#include <windows.h>
using namespace std;
void name(string cond);
string cond;
main()
{
  system("cls");
  name(cond);
}

void name(string cond)
{
  
  cout <<"Enter name: ";
  cin >>cond;
  if(cond=="True")
  {
    cout <<"False";
  }
    if(cond=="False")
  {
    cout <<"True";
  }

}