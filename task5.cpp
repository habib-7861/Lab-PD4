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
    int sum = 0;
    for(int d = 1;d<=num;d=d+1)
    {
        sum = sum + d;
    }
    return sum;
}