#include <iostream>
using namespace std;
main()
{
    char character = 'a';
    
    while(character != 'y')
    {
        cout <<"I'm happy."<<endl;
        cout <<"Enter character: ";
        cin >>character;
    }
}