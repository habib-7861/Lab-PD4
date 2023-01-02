#include <iostream>
using namespace std;
void marks();
main()
{
  while(true)
  {
  marks();
  }
}

void marks()
{
  int mark;
  cout <<"Enter marks: ";
  cin >>mark;
  if(mark > 50)
  {
     cout <<"Pass"<<endl;

  }
  if(mark < 50)
  {
     cout <<"Fail"<<endl;

  }
  if(mark == 50)
  {
     cout <<"Need to improve"<<endl;

  }
}