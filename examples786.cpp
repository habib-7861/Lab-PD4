#include <iostream>
using namespace std;
bool isSymmetric(int num1,int num2);
main()
{
    system("cls");
    int number,num1,num2,result;
    cout <<"Enter number: ";
    cin >>number;
    result = isSymmetric(num1,num2);
    cout <<result;
    if(num1 == num2)
    {
        cout <<"symmetric"<<result;
    }
    if(num1 != num2)
    {
        cout <<"Unsymmetric"<<result;
    }

}
bool isSymmetric(int num1,int num2)
{
    int number,result;
    num1 = number%10;
    num2 = number/100;
    if(num1 == num2)
    {
        
        return true;    
    }
    
    if(num1 != num2)
    {
        
        return false;
    }
}