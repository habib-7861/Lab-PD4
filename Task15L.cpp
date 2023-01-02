#include <iostream>
using namespace std;
void Disc();
string day;
int amount;
int discount;
int pay_amount;
int disc_per = 10;
int per_disc = 5;
main()
{
  system("cls");
  
  while(true)
  {
    Disc();
    if(day == "sunday")
    {
      discount = amount * disc_per/100;
      pay_amount = amount - discount;
      cout <<"payable amount: "<<pay_amount<<endl; 
    }
    if(day != "sunday")
    {
      discount = amount * per_disc/100;
      pay_amount = amount - discount;
      cout <<"payable amount: "<<pay_amount<<endl;
    }
  }
}

void Disc()
{
  cout <<"Enter day: ";
  cin>>day;
  cout <<"Enter perchased Amount: ";
  cin>>amount;
}