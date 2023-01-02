#include <iostream>
using namespace std;
void E_O();
int num;
main()
{
  system("cls");
  while(true)
  {
    E_O();
    if( num%2 == 0 )
    {
      cout <<"Even"<<endl;
    }
    if( num%2 != 0 )
    {
      cout <<"Odd"<<endl;
    }
  }
}

void E_O()
{
  cout <<"Enter number: ";
  cin>>num;
}