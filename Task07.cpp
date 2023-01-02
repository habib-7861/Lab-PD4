#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void maze();
main()
{
  system("cls");
  maze();
  int x = 2;
  int y = 2;
  
  while(true)
  {  Sleep(50);
    if( y < 8)
    { 
      gotoxy(x,y);
      cout << " ";
      y=y+1;
      gotoxy(x,y);
      cout <<"P";
      if(y==7)
      { 
        gotoxy(x,y);
        cout <<" ";
        y=2;
      }
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