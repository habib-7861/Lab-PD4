#include <iostream>
using namespace std;
void Marks();
float marks;
main()
{
  system("cls");
  Marks();
  if(marks >= 50)
  {
    cout <<"you are passed";
  }
  if(marks < 50)
  {
    cout <<"you are Failed";
  }
}
void Marks()
{
  cout <<"Enter marks: ";
  cin>>marks;
}