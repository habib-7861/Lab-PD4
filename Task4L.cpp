#include <iostream>
using namespace std;
void vote();
main()
{
  system("cls");
  vote();
}
void vote()
{
  int age;
  cout <<"Enter age: ";
  cin >>age;
  if(age > 18)
  {
    cout <<"Eligible for vote";
  }
  if(age < 18)
  {
    cout <<"Not Eligible for vote";
  }
}