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
    cout <<name<<" ";
  }
}
void Name()
{
  cout <<"Enter your name: ";
  cin>>name;
}