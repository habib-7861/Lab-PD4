#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void maze();
main()
{
  system("cls");
  maze();
  int x=1;
  int y=3;
  while(true)
  {  Sleep(200);
     gotoxy(x,y);
     if(x <20)
     {
       cout <<" ";
       x=x+1; 
       cout <<"P"; 
     } 
     if(x==20)
     {
       
       gotoxy(x,y);
       cout <<" ";
       x=1;
      
     }

  }
}
void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void maze()
{
    cout <<"*************************"<<endl;
    cout <<"*                       *"<<endl;
    cout <<"*                       *"<<endl;
    cout <<"*                       *"<<endl;
    cout <<"*                       *"<<endl;
    cout <<"*                       *"<<endl;
    cout <<"*                       *"<<endl;
    cout <<"*                       *"<<endl;
    cout <<"*************************"<<endl;
}



