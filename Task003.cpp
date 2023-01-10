#include <iostream>
using namespace std;
bool isSymmetric(int);
int main(){
    system("cls");
    int number,num1,num2,num3,num4,num5,num6;
    bool result;
    cout <<"Enter number: ";
    cin >>number;


    result = isSymmetric(number);
    if(result == true)
    {
        cout <<"symmetric";
    }
    if(result == false)
    {
        cout <<"Unsymmetric";
    }
}
bool isSymmetric(int number)
{
    int num1 = number%10;
    int num2 = number/10;
    int num3 = num2%10;
    int num4 = num2/10;
    int num5 = num4%10;
    int num6 = num4/10;
    if (num1 == num5)
    {
        return true;
    } 
    if (num1 != num5)
    {
        return false;
    } 
    return 0;

}
