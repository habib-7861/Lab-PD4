#include <iostream>
#include <cmath>
using namespace std;
float volume(float length,float width,float height);
float volumes(float length,float width,float height);
float volumess(float length,float width,float height);
main()
{
    system("cls");
    float length,width,height;
    cout <<"Enter length: ";
    cin>>length;
    cout <<"Enter width: ";
    cin>>width;
    cout <<"Enter height: ";
    cin>>height;
    float result = volume(length,width,height);
    cout <<"The volume is "<<result<<"cubicmeter"<<endl;
    float results = volumes(length,width,height);
    cout <<"The volume is "<<results<<"kilometer"<<endl;
    float resultss = volumess(length,width,height);
    cout <<"The volume is "<<resultss<<"milimeters"<<endl;
}
float volume(float length,float width,float height)
{
    float volumes = ((length*width*height)/3)*pow(100,3);
    return volumes;
}
float volumes(float length,float width,float height)
{
    float volumes = ((length*width*height)/3)/pow(1000,3);
    return volumes;
}
float volumess(float length,float width,float height)
{
    float volumes = ((length*width*height)/3)*pow(1000,3);
    return volumes;
}