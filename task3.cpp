#include <iostream>
using namespace std;
void print(int row);
void prints(int row);
main()
{
    system("cls");
    int row;
    cout <<"Enter row: ";
    cin >>row;
    print(row);
    prints(row);
}
void print(int row)
{
    for(int a =  row; a >= 1;a = a-1)
    { 
        for(int b=1;b<=a;b = b+1 )
        {
            cout <<" ";
        }
        for(int c =row;c>=a;c = c-1)
        {
            cout <<"*";
        }
        cout <<endl;
    }
}
void prints(int row)
{
    for( int d = 1;d<=row;d= d+1)
    {
        for(int e = 1;e<=d;e = e+1)
        {
            cout <<" ";
        }
        for(int f = row;f>=d;f=f-1)
        {
            cout <<"*";
        }
        cout<<endl;
    }

}
