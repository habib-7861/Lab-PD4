#include <iostream>
#include <windows.h>
using namespace std;
void ticket();

main()
{
  ticket();
}
void ticket()
{ 
  string country;
  int price;
  int discount;
  int payable;
    while(true)
  {
    cout <<"Enter country name: ";
    cin >>country;
    cout << "Enter price: ";
    cin >>price;
    if(country == "Pakistan")
    {
    discount = price*0.05;
    payable = price - discount;
    cout <<"payable amount is: "<<payable<<endl;
    }  
    if(country == "Ireland")
    {
    discount = price*0.10;
    payable = price - discount;
    cout <<"payable amount is: "<<payable<<endl;
    } 
    if(country == "India")
    {
    discount = price*0.20;
    payable = price - discount;
    cout <<"payable amount is: "<<payable<<endl;
    }
    if(country == "England")
    {
    discount = price*0.30;
    payable = price - discount;
    cout <<"payable amount is: "<<payable<<endl; 
    }
    if(country == "Canada")
    {
    discount = price*0.45;
    payable = price - discount;
    cout <<"payable amount is: "<<payable<<endl; 
    }
  }
}

