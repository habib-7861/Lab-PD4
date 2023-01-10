#include <iostream>
using namespace std;
float pool(float v,float p1,float p2,float H);
main()
{
    system("cls");
    float v,p1,p2,H;
    float p1_H,p2_H,p1_p2;
    cout <<"Enter volume: ";
    cin >>v;
    cout <<"Enter flow rate of pipe1: ";
    cin >>p1;
    cout <<"Enter flow rate of pipe2: ";
    cin >>p2;
    cout <<"Enter hours: ";
    cin >>H;
    p1_H = (p1*H);
    p2_H = (p2*H);
    p1_p2 = (p1_H)+(p2_H);
    float full = (p1_p2/v)*100;
    int filled = pool(v,p1,p2,H);
    cout <<"The pool is "<<filled<<"% "<<"full."<<endl;
    int p1_contr = (p1_H/p1_p2)*100;
    cout <<"P1 contribution is: "<<p1_contr<<"%"<<endl;
    int p2_contr = (p2_H/p1_p2)*100;
    cout <<"P2 contribution is: "<<p2_contr<<"%"<<endl;
    if(full>v)
    {
        int overflow = full - v;
        cout <<"For "<<H<<" hours "<<"the pool overflows with "<<overflow<<" "<<"litters.";
    }
}
float pool(float v,float p1,float p2,float H)
{
    float p1_H = (p1*H);
    float p2_H = (p2*H);
    float p1_p2 = (p1_H)+(p2_H);
    float full = (p1_p2/v)*100;
    return full;
}

