#include <iostream>
using namespace std;
main()
{
    int number;
    cout <<"Enter lucky number: ";
    cin >>number;
    while(number != 10)
    {
        cout <<"Not my lucky number! try Again"<<endl;
        cout <<"Try again: "<<endl;
        cin >>number;
    }
}