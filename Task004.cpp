#include <iostream>
using namespace std;
int isEven(int num1,int num3,int num5,int num7,int num9);
main()
{
    system("cls");
    int num,num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,result;
    cout <<"Enter number: ";
    cin>>num;
    num1 = num%10;                //5                  //12345
    num2 = num/10;                //1234
    num3 = num2%10;               //4
    num4 = num2/10;               //123
    num5 = num4%10;               //3
    num6 = num4/10;               //12
    num7 = num6%10;               //2
    num8 = num6/10;               //1
    num9 = num8%10;               //1
    num10 = num8/10;              //0
    result = isEven(num1,num3,num5,num7,num9);
    cout <<result<<endl;
    if(result%2==0)
    {
        cout <<"Evenish";
    }
    if(result%2==1)
    {
        cout <<"Oddish";
    }

}
int isEven(int num1,int num3,int num5,int num7,int num9)
{   
    int add;
    add = num1+num3+num5+num7+num9;
    return add;
}