#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int, int);
void grid();
main()
{
 system("cls"); 
 grid();
 int x = 2;
 int y = 1;
 while(true)
 { Sleep(200);
   if(x <75)
   {
      gotoxy(x,y);
      cout<<" ";
      x = x+1;
      cout <<"P";
   }
   if(x == 75)
   {
      gotoxy(x,y);
      cout<<" ";
      x = x-1;
      gotoxy(x,y);
      x=2;
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
void grid()
{
cout <<"##############################################################################"<<endl;
cout <<"||.. .....................................................  ................||"<<endl;
cout <<"||.. %%%%%%%%%%%%%%%%        ...     %%%%%%%%%%%%%%  |%|..   %%%     %%%%%  ||"<<endl;
cout <<"||..        |%|   |%|     |%|...     |%|        |%|  |%|..   |%|      |%|   ||"<<endl;
cout <<"||..        |%|   |%|     |%|...     |%|        |%|  |%|..   |%|      |%|   ||"<<endl;
cout <<"||..        %%%%%%%%  . . |%|...     %%%%%%%%%%%%%%     ..           %%%%.  ||"<<endl;
cout <<"||..        |%|       . . |%|...    ...............  |%|..   %%%         .  ||"<<endl;
cout <<"||..        %%%%%%%%%%. . |%|...    %%%%%%%%%%%%%    |%|..   |%|     %%%%.  ||"<<endl;
cout <<"||..               |%|.             |%|.......       |%|..            |%|.  ||"<<endl;
cout <<"||..     ..........|%|.             |%|.......|%|       ..   |%|      |%|.  ||"<<endl;
cout <<"||..|%|  |%|%%%|%|.|%|. |%|            .......|%|    G  ..|%|%%%%.    |%|.  ||"<<endl;
cout <<"||..|%|  |%|   |%|.|%|. %%%%%%%%%%%%%  .......|%|        .|%||%|..   ...    ||"<<endl;
cout <<"||..|%|  |%|   |%|..           ...|%|     %%%%%%%       . |%|.        |%|.. ||"<<endl;        
cout <<"||..|%|  %%%%%%%%%%%           ...|%|%%%%%%%%%%       %%%%%%%%       .....  ||"<<endl;        
cout <<"##############################################################################"<<endl;
}