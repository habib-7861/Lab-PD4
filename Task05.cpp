#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void name();
main()
{
   system("cls");
   gotoxy(40,15);
   name();

}

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void name()
{
cout <<"**    **      **     *********     **  **********               ";
gotoxy(40,16);
cout <<"**    **     ****    **        *   **  **         *             ";
gotoxy(40,17);
cout <<"**    **    **  **   **         *  **  **          *            ";
gotoxy(40,18);
cout <<"**    **   **    **  **        *   **  **         *             ";
gotoxy(40,19);
cout <<"********   ********  *********     **  **********               ";
gotoxy(40,20);
cout <<"**    **   **    **  **        *   **  **         *             ";
gotoxy(40,21);
cout <<"**    **   **    **  **         *  **  **          *            ";
gotoxy(40,22);
cout <<"**    **   **    **  **        *   **  **         *             ";
gotoxy(40,23);
cout <<"**    **   **    **  *********     **  **********               ";
}