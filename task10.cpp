#include <iostream>
using namespace std;
int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, float gcd);
main()
{
    float number1,number2,gcd,lcm;
    cout <<"Enter number1: ";
    cin>>number1;
    cout <<"Enter number2: ";
    cin>>number2;
    int result1 = calculateGCD(number1,number2);
    cout <<result1;
    int result2 = calculateLCM(number1,number2,gcd);
    cout <<result2;
}
int calculateGCD(int number1, int number2)
{
    
}
int calculateLCM(int number1, int number2, int gcd)
{
    int a = (number1*number2)/gcd;
    return a;
}