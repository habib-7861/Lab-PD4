#include <iostream>
using namespace std;
void print(int row);
main()
{
    system("cls");
    int row;
    cout <<"Enter rows: ";
    cin >>row;
    print(row);
    cout <<endl;
}
void print(int row)
{
    for(int a = 1;a<=row;a=a+1)
    {
        for(int b = 1;b<=a;b=b+1)
        {
            cout <<"*";
        }
        for(int c = row;c>=a;c = c-1)
        {
            cout <<" ";
        }
        for(int d = row;d>=a;d = d-1)
        {
            cout <<" ";
        }
        for(int e = 1;e<=a;e=e+1)
        {
            cout <<"*";
        }
        cout <<endl;
    }
    for(int f=1;f<=(2*row)+2;f=f+1)
    {
        cout <<"*";
    }
}

