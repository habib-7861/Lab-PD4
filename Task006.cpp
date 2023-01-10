#include <iostream>
using namespace std;
main()
{
    system("cls");
    int number;
while(true)
    {
        cout <<"Enter number: ";
        cin >>number;
        int num1 = number/10;
        if(num1 == 1)
        {
            cout <<"Ten";
        }
        if(num1 == 2)
        {
            cout <<"Twenty";
        }
        if(num1 == 3)
        {
            cout <<"Thirty";
        }
        if(num1 == 4)
        {
            cout <<"Forty";
        }
        if(num1 == 5)
        {
            cout <<"Fifty";
        }
        if(num1 == 6)
        {
            cout <<"Sixty";
        }
        if(num1 == 7)
        {
            cout <<"Seventy";
        }
        if(num1 == 8)
        {
            cout <<"Eighty";
        }
        if(num1 == 9)
        {
            cout <<"Ninty";
        }
        int num2 = number%10;
        if(num2 == 1)
        {
            cout <<"one"<<endl;
        }
        if(num2 == 2)
        {
            cout <<"Two"<<endl;
        }
        if(num2 == 3)
        {
            cout <<"Three"<<endl;
        }
        if(num2 == 4)
        {
            cout <<"Four"<<endl;
        }
        if(num2 == 5)
        {
            cout <<"Five"<<endl;
        }
        if(num2 == 6)
        {
            cout <<"Six"<<endl;
        }
        if(num2 == 7)
        {
            cout <<"Seven"<<endl;
        }
        if(num2 == 8)
        {
            cout <<"Eight"<<endl;
        }
        if(num2 == 9)
        {
            cout <<"Nine"<<endl;
        }
    }
    return 0;
}
