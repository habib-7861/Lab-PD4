#include <iostream>
using namespace std;
float taxCalculator(float tax_rate, float price);
main()
{ 
    system("cls");
    string vehicle;char code;
    float price,tax_rate;
    while(true)
    {
    cout <<"Enter vehicle type: ";
    cin>>vehicle;
    cout <<"Enter vehicle code: ";
    cin>>code;
    cout <<"Enter price of vehicle: ";
    cin>>price;
    cout <<"Enter tax rate: ";
    cin >>tax_rate;
    float result = taxCalculator(tax_rate,price);
    cout <<"The final price on a vehicle of type "<<" "<<vehicle<<" after adding the text is "<<"  $"<<result<<" "<<"with "<<vehicle<<"  "<< "replaced by the vehicle type and $"<<result<<" "<<"with the final price"<<endl;
    }
}
float taxCalculator(float tax_rate, float price)
{
    float tax_amount = price*tax_rate/100;
    float final_price = price + tax_amount;
    return final_price;
}