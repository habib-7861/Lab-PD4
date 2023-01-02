#include <iostream>
using namespace std;
void isEven(int num);
main()
{
  while(true)
  {int num;
  cout <<"Enter nuber: ";
  cin>>num;
  isEven(num);
  }
}
void isEven(int num)
{
  if(num%2==0)
  {
    cout <<"Even"<<endl;
  }
  if(num%2!=0)
  {
    cout <<"odd"<<endl;
  }
}
