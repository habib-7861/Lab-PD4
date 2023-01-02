#include <iostream>
#include <windows.h>
using namespace std;
void flowers();

main()
{
  system("cls");
  flowers();
}

void flowers()
{
  int r_flow;  
  int w_flow;
  int t_flow;
  float r_price;
  float w_price;
  float t_price;
  float r_flow_price;
  float w_flow_price;
  float t_flow_price;
  float original_price;
  float discount;
  float payable_amount;
  r_price = 2;
  w_price = 4.10;
  t_price = 2.50;
  cout <<"Enter number of red flowers : ";
  cin >>r_flow;
  cout <<"Enter number of white flowers: ";
  cin >>w_flow;
  cout <<"Enter number of Tulip flowers: ";
  cin >>t_flow;
  r_flow_price = r_price*r_flow;
  w_flow_price = w_price*w_flow;
  t_flow_price = t_price*t_flow;
  original_price = r_flow_price + w_flow_price + t_flow_price;
  cout <<"The original price in dollar is: "<<original_price<<endl;
  if(original_price > 200)
    {
    discount = original_price * 0.20;
    payable_amount = original_price - discount;
    cout <<"The payable amount is: "<<payable_amount;
    }

}