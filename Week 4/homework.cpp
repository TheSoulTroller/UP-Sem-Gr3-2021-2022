#include <iostream>
#include <cmath>
using namespace std;

int main()
{  
    //Fibonachi sequence
    int n;
    cout << "n = ";
    cin >> n;
    cout << endl;
    int firstNumber = 1, secondNumber = 1, thirdNumber;

    for (int i = 1; i <= n - 2; i++) {
        thirdNumber = firstNumber + secondNumber;
        firstNumber = secondNumber;
        secondNumber = thirdNumber;
    }

    cout << "Third Number: " << thirdNumber <<endl;

    //task 1
    int month;
    cout << "Enter a month: ";
    cin >> month;
    switch(month){
        case 1: cout << "January";
        break;
        case 2: cout << "February";
        break;
        case 3: cout << "March";
        break;
        case 4: cout << "April";
        break;
        case 5: cout << "May";
        break;
        case 6: cout << "June";
        break;
        case 7: cout << "July";
        break;
        case 8: cout << "August";
        break;
        case 9: cout << "September";
        break;
        case 10:cout << "October";
        break;
        case 11:cout << "November";
        break;
        case 12:cout << "December";
        break;
        default: cout << "Invalid input!";
    }
    cout << ' ';
     switch(month){
        case 1:
        case 2:
        case 12: cout << "Winter";
        break;
        case 3:
        case 4:
        case 5: cout << "Spring";
        break;
        case 6:
        case 7:
        case 8: cout << "Summer";
        break;
        case 9:
        case 10:
        case 11:cout << "Fall";
        break;
        default: cout << "Invalid input!";
    }

    //task 2
    double a,b,c,d,x1,x2;
    cout << "Enter values for a,b & c: ";
    cin >> a >> b >> c;
    d = b * b - 4 * a * c;
    if ( a == 0 )
    {
        cout << "Not a quadratic equation!"; 
    }else if ( d < 0 ){
        cout << "No roots to this equation!";
    }else if ( d == 0 ){
        x1 = -b / (2 * a);
        cout << "x1 = x2 = "<< x1;
    }else {
        x1 = ( -b + sqrt(d) ) / (2 * a);
        x2 = ( -b - sqrt(d) ) / (2 * a);
        cout << "x1 = " << x1 << '\t' << "x2 = " << x2; 
    }

    //task 3
    int a,n,sum = 1;
    cout << "Enter a number and its power: ";
    cin >> a >> n;
    cout << endl;
    for(int i = 1;i <= n;i++){
        sum *=a;
    }
    cout << "Result: " << sum <<endl;

    //task 4
    int n;
    cout << "n = ";
    cin >> n;
    cout << endl;
    for(int i=1; i <= n; i++){
        for(int j=1; j <= i; j++)
        cout << j << " + ";
    }

    return 0;
}