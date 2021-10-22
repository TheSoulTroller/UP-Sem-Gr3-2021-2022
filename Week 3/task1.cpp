#include <iostream>
using namespace std;
int main()
{
    char op;
    double num1 , num2;
    cout << "Enter operator (+,-,*,/) and 2 numbers: "; 
    cin >> op >> num1 >> num2;
    if(op == '+')
    {
        cout << num1 + num2 << endl;
    } else if(op == '-')
        {
            cout << num1 - num2 << endl;
        }else if(op == '*')
            {
                cout << num1 * num2 << endl;
            }else if(op == '/')
                {
                    cout << num1 / num2 << endl;
                } else  {
                            cout << "Incorrect operator" << endl;
                        } 
            
    return 0;
}