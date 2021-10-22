#include <iostream>
using namespace std;
int main()
{
    double BMI, W, h;
    cout<<"Enter weight in kg: ";
    cin>>W;
    cout<<endl<<"Enter height in m: ";
    cin>>h;
    BMI = W/ (h*h);
    cout<<"Your BMI is "<<BMI<<endl;
    return 0;
}