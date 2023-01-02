#include <iostream>
using namespace std;
main()
{
  int marks;
  cout <<"Enter marks: ";
  cin >>marks;
  if(marks > 50)
  {
     cout <<"Pass";
  } 
  if(marks < 50)
  {
     cout <<"Fail";
  }   
  if(marks == 50)
  {
     cout <<"Need to improve";
  } 
}