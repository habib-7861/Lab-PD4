#include <iostream>
using namespace std;
int number(int num);
main()
{
    system("cls");
        int num;
        cout <<"Enter number: ";
        cin >>num;
        int result = number(num);
        cout <<result<<endl;
}
int number(int num)
{        
    int a = 1;
    int b = 2;
    int c;
    for(int d = 1;d<num;d=d+1)
    {
        c = a+b;
        a = c;
        b = b+1;
    }
    return c;
}