#include <iostream>
using namespace std;
main()
{
    system("cls");
    int hours,minute;
    cout<<"Enter hours : ";
    cin >>hours;
    cout <<"Enter minutes: ";
    cin >>minute;
    int minutes = minute + 15;
    if(hours <23)
    {
        if(minutes >= 60)
        {
            cout <<hours+1<<":"<<minutes-60;
        }
        if(minutes < 60)
        {
            cout <<hours<<":"<<minutes;
        }
    }
    if(hours == 23)
    {
        if(minutes >60)
        {
            cout <<hours - 23<<":"<<minutes -60;
        }
    }
}
