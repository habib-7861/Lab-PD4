#include <iostream>
using namespace std;
char output(char outputs);
main()
{
    system("cls");
    char character,result;
    cout <<"Enter character: ";
    cin>>character;
    result = output(character);
    if(character == 'A')
    {
        cout <<"Uppercase";
    }
    if(character == 'a')
    {
        cout <<"lowercase";
    }
}
char output(char outputs)
{
    if(outputs == 'A')
    {
    return outputs;
    }
    return 0;
}

