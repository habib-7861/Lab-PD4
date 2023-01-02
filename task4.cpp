#include <iostream>
using namespace std;
void calculateBilal(string day , int amount);
main()
{
  string day;
  int amount;
  cout <<"Enter days: ";
  cin>>day;
  cout <<"Enter amounts: ";
  cin>>amount;
}
 void calculateBilal(string day , int amount)
{
  if(day == "sunday")
  {
  int discount = amount*0.9;
  cout <<"The payable amount is: "<<discount;
  } 
  cout << "complete"; 
}