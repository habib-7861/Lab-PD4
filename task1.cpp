#include <iostream>
using namespace std;
void table(int number);
main()
{
    system("cls");
    int number;
    while(true)
    {
        cout <<"Enter number: ";
        cin >>number;
        table(number); 
    }
}
void table(int number)
{
    for(int count = 1; count <=10;count = count + 1)
    cout <<number<<" * "<<count<<" = "<< number*count<<endl;
}