#include <iostream>
#include <windows.h>
using namespace std;
void printMenu();
void calculateAggregate();
void compareMarks();
  string name;
  int m_marks;
  int i_marks;
  int e_marks;
  float percentage;
  string std1;
  string std2;
  int ecat1;
  int ecat2;
main()
{
  system("cls");
  printMenu();
  calculateAggregate();
  compareMarks();
  if( ecat1 > ecat2 )
  {
    cout <<std1<<" "<<"has rollnumber 01:";
  }
  if( ecat1 < ecat2 )
  {
    cout <<std2<<" "<<"has rollnumber 01:";
  }
}

void printMenu()
{
  cout <<"**************************************************"<<endl;
  cout <<"*                                                *"<<endl;
  cout <<"*     UNIVERSITY ADMISSION MENAGEMENT SYSTEM     *"<<endl;
  cout <<"*                                                *"<<endl;
  cout <<"**************************************************"<<endl;
}
void calculateAggregate()
{

  cout <<"Enter name of student: ";
  cin >>name;
  cout <<"Enter matric marks: ";
  cin >>m_marks;
  cout <<"Enter Inter marks: ";
  cin >>i_marks;
  cout <<"Enter Ecat marks: ";
  cin >>e_marks;
  percentage = ((m_marks*0.30/1100) + (i_marks*0.30/550) + (e_marks*0.40/400))*100;
  cout <<"The aggregate is: "<<percentage<<endl;
}

void compareMarks()
{

  cout <<"Enter name of student: ";
  cin >>std1;
  cout <<"Enter Ecant marks: ";
  cin >>ecat1;
  cout <<"Enter name of student: ";
  cin >>std2;
  cout <<"Enter Ecant marks: ";
  cin >>ecat2;
}
