#include <iostream>
using namespace std;
int mult(int num,int number);
main()
{
    system("cls");
    int num;
    int multiplication;
    int number = 5;
    cout <<"Enter number:";
    cin>>num;
    multiplication = mult(num,number);
    cout <<"The Result is: "<<multiplication;

}
int mult(int num,int number)
{
    int result;
    
    result = num*number;
    return result;
}