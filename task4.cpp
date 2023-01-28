#include <iostream>
using namespace std;
void print(int number);
main()
{
    int number;
    cout <<"Enter number: ";
    cin >>number;
    print(number);
}
void print(int number)
{
    int c;
    for(int a = 1;a<=number;a=a+1)
    {

        int b = number%4;
        if(b != 0)
        {
           cout <<a<<endl;
        }
        else
        {
            c = number*10;
            a = c;
        }
        cout <<c<<endl;
    }
}