#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void Awais();
main()
{
  system("cls");
  gotoxy(30,15);
  Awais();
}
void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void Awais()
{
  cout <<"    **    ";
  gotoxy(30,16);
  cout <<"   ****   ";
  gotoxy(30,17);
  cout <<"  **  **  ";
  gotoxy(30,18);
  cout <<" ******** ";
  gotoxy(30,19);
  cout <<" **    ** ";
  gotoxy(30,20);
  cout <<" **    ** ";
  gotoxy(30,21);
  cout <<" **    ** "; 
  gotoxy(30,23);
  cout <<" **      ** ";
  gotoxy(30,24);
  cout <<" **      ** ";
  gotoxy(30,25);
  cout <<" **      ** ";
  gotoxy(30,26);
  cout <<" **      ** ";
  gotoxy(30,27);
  cout <<" **   *  ** ";
  gotoxy(30,28);
  cout <<"  ** *** ** ";
  gotoxy(30,29);
  cout <<"   **   **  ";
  gotoxy(30,31);
  cout <<"    **    ";
  gotoxy(30,32);
  cout <<"   ****   ";
  gotoxy(30,33);
  cout <<"  **  **  ";
  gotoxy(30,34);
  cout <<" ******** ";
  gotoxy(30,35);
  cout <<" **    ** ";
  gotoxy(30,36);
  cout <<" **    ** ";
  gotoxy(30,37);
  cout <<" **    ** ";
  gotoxy(30,39); 
  cout <<" ** ";
  gotoxy(30,40);
  cout <<" ** ";
  gotoxy(30,41);
  cout <<" ** ";
  gotoxy(30,42);
  cout <<" ** ";
  gotoxy(30,43);
  cout <<" ** ";
  gotoxy(30,44);
  cout <<" ** ";
  gotoxy(30,45);
  cout <<" ** ";
  gotoxy(30,47);
  cout <<"   *******    ";
  gotoxy(30,48);
  cout <<"   *******    ";
  gotoxy(30,49);
  cout <<" *            ";
  gotoxy(30,50);
  cout <<" *            ";
  gotoxy(30,51);
  cout <<"   *****      ";
  gotoxy(30,52);
  cout <<"         *    ";
  gotoxy(30,53);
  cout <<"         *    ";
  gotoxy(30,54);
  cout <<" ********     ";
  gotoxy(30,55);
  cout <<" ********    ";
}