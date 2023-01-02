#include <iostream>
#include <windows.h>
using namespace std;
void speed();
main()
{
  system("cls");
  speed();
}
void speed()
{
 int speed_limit;
 cout <<"Enter speed limit in km/h: "; 
 cin >>speed_limit;
   if(speed_limit <= 100)
   {
     cout <<"You are going good.";
   }
   if(speed_limit > 100)
   {
   cout <<"Stop! you are challanged.";
   }
  
}