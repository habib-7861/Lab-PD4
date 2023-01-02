#include <iostream>
using namespace std;
void disc();
string day;
int amount;
int discount;
int pay_amount;
int discount_per = 10;
main()
{
  system("cls");
  disc();
  if(day == "sunday")
  {
    cout <<"The payable amount is: "<<pay_amount;
  }
  if(day != "sunday")
  {
    cout <<"The payable amount is: "<<amount;
  }
}
void disc()
{
  cout <<"Enter day: ";
  cin>>day;
  cout <<"Enter amount: ";
  cin>>amount;
  cout <<"amount is: "<<amount<<endl;
  discount = amount * discount_per/100;
  pay_amount = amount - discount;
  
}