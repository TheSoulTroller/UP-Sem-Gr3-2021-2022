#include <iostream>
using namespace std;
int main(){
    //task 2.1
    /*
    int a,b,c;
    cout<<"Input 3 numbers: ";
    cin>>a>>b>>c;
    int max;
    max = a;
    if(max < b)
    {
        max = b;
    }
    if( max < c)
    {
            max = c;
    }
    cout<<"Max: "<<max;
    */

    //task 2.2
    /*
    int a,b,c;
    cout<<"Input 3 numbers: ";
    cin>>a>>b>>c;
    if(a < b){
        if(b < c)
        {
            cout<<"Max: "<<c;
        }else{
            cout<<"Max: "<<b;
        }
    }else {
        cout<<"Max: "<<a;
    }
    */

    //task 3
    /*
    int a,b,c;
    cout<<"Input 3 numbers: ";
    cin>>a>>b>>c;
    if( a > 0 && b > 0 && c > 0){
        if(a + b > c && a + c > b && b + c > a){
            cout<<"Exists,";
            if(a == b && b == c){
                cout<<"Equilateral"<<endl;
            }else if(a == b || b == c || a == c){
                cout<<"Isoceles"<<endl;
            }else{
                cout<<"Scalene"<<endl; 
            }
        }else{
            cout<<"Does not exist!"<<endl;
        }
    }else{
        cout<<"Incorrect numbers!"<<endl;
    }
    */

   //task 1
   
    return 0;
}