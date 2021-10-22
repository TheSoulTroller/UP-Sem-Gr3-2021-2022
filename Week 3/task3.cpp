#include <iostream>
using namespace std;
int main()
{
    int num, first, second, third, forth;
    cout << "Enter 4-digit number: ";
    cin >> num;
    first = num % 10;
    //cout<<first<<endl;
    second = (num % 100) / 10;
    //cout<<second<<endl;
    third = (num / 100) % 10;
    //cout<<third<<endl;
    forth = num / 1000;
    //cout<<forth<<endl;
    if(first == second)
    {
        cout<<"Not all digits are diffrent."<<endl;
    }else if(first == third)
        {
            cout<<"Not all digits are diffrent."<<endl;
        }else if(first == forth)
            {
                cout<<"Not all digits are diffrent."<<endl;
            }else if(second == third)
                {
                    cout<<"Not all digits are diffrent."<<endl;
                }else if(second == forth)
                    {
                        cout<<"Not all digits are diffrent."<<endl;
                    }else if(third == forth)
                        {
                            cout<<"Not all digits are diffrent."<<endl;
                        }else 
                            {
                                cout<<"All digits are diffrent."<<endl;
                            }
    return 0;
}