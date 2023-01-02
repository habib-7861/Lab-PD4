#include <iostream>
using namespace std;
void Name();
string name; 
main()
{
  system("cls");
  Name();
  while(true)
  {
    if(name == "IRZAM")
    { 
      cout <<name<<" ";
    } 
    if(name != "IRZAM")
    { 
       Name();
    }  
  } 
}
void Name()
{
  cout <<"Enter your name: ";
  cin>>name; 
}