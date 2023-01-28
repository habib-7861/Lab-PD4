#include <iostream>
#include <windows.h>
using namespace std;
void printGrid();
void gotoxy(int x, int y);
void erase(int x,int y);
void printpackman(int x,int y);
char getcharAtxy(short int x,short int y);
main()
{
    system("cls");
    printGrid();
    int x = 20;
    int y = 5;
    gotoxy(x,y);
    if(x < 75)
    {
        gotoxy(x,y);
        cout <<" ";
        x = x+1;
        cout <<"P";
    }
    if(x == 75)
    {
        gotoxy(x,y);
        x = x-1;
        cout <<" ";
        gotoxy(x,y);
        x=20;
    }
}
void printGrid()
{
cout <<"##############################################################################"<<endl;
cout <<"||.. .....................................................  ..............  ||"<<endl;
cout <<"||.. %%%%%%%%%%%%%%%%        ...     %%%%%%%%%%%%%%  |%|..   %%%     %%%    ||"<<endl;
cout <<"||..        |%|   |%|     |%|...     |%|        |%|  |%|..   |%|      |%|   ||"<<endl;
cout <<"||..        |%|   |%|     |%|...     |%|        |%|  |%|..   |%|      |%|   ||"<<endl;
cout <<"||..        %%%%%%%%  . . |%|...     %%%%%%%%%%%%%%     ..           %%%%.  ||"<<endl;
cout <<"||..        |%|       . . |%|...    ...............  |%|..   %%          .  ||"<<endl;
cout <<"||..        %%%%%%%%%%. . |%|...    %%%%%%%%%%%%     |%|..   |%|     %%%%.  ||"<<endl;
cout <<"||..               |%|.             |%|.......       |%|..            |%|.  ||"<<endl;
cout <<"||..     ..........|%|.             |%|.......|%|       ..   |%|      |%|.  ||"<<endl;
cout <<"||..|%|  |%|%% |%|.|%|. |%|            .......|%|   G   ..|%|%%%%     |%|.  ||"<<endl;
cout <<"||..|%|  |%|   |%|.|%|. %%%%%%%%%%%%  .......|%|        .|%||%|..     ...   ||"<<endl;
cout <<"||..|%|  |%|   |%|..           ...|%|     %%%%%%       . |%|.         |%|.  ||"<<endl;        
cout <<"||..|%|  %%%%%%%%%%           ...|%|%%%%%%%%%%%%     %%%%%%%%        .....  ||"<<endl;        
cout <<"##############################################################################"<<endl;        
}
void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
char getcharAtxy(short int x,short int y)
{
    CHAR_INFO ci;
    COORD xy = {0,0};
    SMALL_RECT rect = {x,y,x,y};
    COORD coordBufSize;
    coordBufSize.X =1;
    coordBufSize.Y =1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci , coordBufSize,xy,&rect) ? ci.Char.AsciiChar : ' ';
}
void erase(int x,int y)
{
    gotoxy(x,y);
    cout <<"P";
}

