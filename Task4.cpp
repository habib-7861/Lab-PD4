#include <iostream>
#include <cmath>
using namespace std;
float project(float n_hours,float days,float workers);
main()
{
    system("cls");
    float n_hours,days,workers;
    int percentage_days = 10;
    int hours_per_day = 8;
    int extra_hours = 2;
    cout <<"Enter needed hours: ";
    cin >>n_hours;
    cout <<"Enter days that firm has: ";
    cin >>days;
    cout <<"Enter number of workers: ";
    cin >>workers;
    float result = project(n_hours,days,workers); 
    if(result > n_hours)
    {
        float Hs_left = result - n_hours;
        cout <<"Yes! "<<Hs_left<<" "<<"hours left.";
    }
    if(result < n_hours)
    {
        float Hs_needed = n_hours - result;
        cout <<"Not enough time! "<<Hs_needed<<" "<<"hours needed.";
    }
}
float project(float n_hours,float days,float workers)
{
    int percentage_days = 10;
    int hours_per_day = 8;
    int extra_hours = 2;
    float days_per = days*percentage_days/100;
    float days_left = days - days_per;
    float day_H = hours_per_day + extra_hours;
    float days_H = days_left * day_H;
    float total_H = workers*days_H;
    return total_H;
}