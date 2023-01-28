#include <iostream>
using namespace std;
void print(int row);
main()
{
    system("cls");
    int row;
    cout <<"Enter number of rows: ";
    cin >>row;
    print(row);
}
void print(int row)
{
    for( int a = row;a>=1;a=a-1)
    {
        for(int b = 1;b<=a;b=b+1)
        {
            cout <<"*";
        }
        cout <<endl;
    }
}