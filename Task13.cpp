#include <iostream>
#include <windows.h>
using namespace std;
void time();
main()
{
  system("cls");
  time();
}
void time()
{
  int holidays;
  int work_day_minutes;
  int holi_day_minutes;
  int cat_play_minutes;
  int work_days_year;
  int play_minutes_year;
  int time_after_play;
  float time_hour;
  work_day_minutes = 63;
  holi_day_minutes = 127;
  cat_play_minutes = 30000;
  cout <<"Enter holidays: ";
  cin >>holidays;
  work_days_year = 365-holidays;
  cout <<"The working days per year are: "<<work_days_year<<endl;
  play_minutes_year = work_days_year * work_day_minutes + holidays * holi_day_minutes;
  cout <<"The Time for playing per year is: "<<play_minutes_year<<endl;
  time_after_play =  cat_play_minutes - play_minutes_year;
  cout <<"The time remaining of cat after playing with owner: "<<time_after_play<<endl;
  time_hour = time_after_play/60;
  cout <<"The time in hours is: "<<time_hour<<endl; 
}