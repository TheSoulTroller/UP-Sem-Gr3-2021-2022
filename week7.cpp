#include <iostream>
#include <cstring>
using namespace std;

void filter()
{
    int option;
    cin >> option;
    if (option < 1 || option > 3)
    {
        do
        {
            cout << "Please enter a valid number! " << endl;
            cin >> option;

        } while (option < 1 || option > 3);
    }

    char Arr[33];

    // for (int i = 0; i <= 32; i++)
    // {
    //     cin >> Arr[i];
    // }
    cin.ignore();
    cin.getline(Arr, 33);

    if (option == 1)
    {
        for (int i = 0; Arr[i] != '\0'; i++)
        {
            if ((Arr[i] >= 'A' && Arr[i] <= 'Z') || (Arr[i] >= 'a' && Arr[i] <= 'z'))
            {
                cout << Arr[i];
            }
            else
            {
                cout << ' ';
            }
        }
    }

    if (option == 2)
    {
        for (int i = 0; Arr[i] != '\0'; i++)
        {
            if (Arr[i] >= '0' && Arr[i] <= '9')
            {
                cout << Arr[i];
            }
            else
            {
                cout << ' ';
            }
        }
    }

    if (option == 3)
    {
        for (int i = 0; Arr[i] != '\0'; i++)
        {
            if ((Arr[i] > 'Z' && Arr[i] < 'a') || Arr[i] > 'z')
            {
                cout << Arr[i];
            }
            else
            {
                cout << ' ';
            }
        }
    }
}


void hackerName()
{
    cout << "Enter a name: ";
    char Arr[33];
    cin.getline(Arr, 33);
    for (int i = 0; Arr[i] != '\0'; i++)
    {
        if (Arr[i] == 'A' || Arr[i] == 'a')
        {
            Arr[i] = '4';
            continue;
        }

        if (Arr[i] == 'E' || Arr[i] == 'e')
        {
            Arr[i] = '3';
            continue;
        }

        if (Arr[i] == 'I' || Arr[i] == 'i')
        {
            Arr[i] = '1';
            continue;
        }

        if (Arr[i] == 'O' || Arr[i] == 'o')
        {
            Arr[i] = '0';
            continue;
        }

        if (Arr[i] > 'a' && Arr[i] <= 'z')
        {
            Arr[i] = (int)Arr[i] - 32;
            continue;
        }

        if (Arr[i] == ' ')
        {
            Arr[i] = '_';
            continue;
        }
    }

    cout << Arr;
}


void nameCon()
{
    cout << "Enter a name: ";
    char Name[33];
    cin.getline(Name, 33);

    cout << "Enter a family name: ";
    char Family[33];
    cin.getline(Family, 33);

    char Unite[66];
    int i = 0;
    for (; Name[i] != '\0'; i++)
    {
        if (Name[i] >= 'A' && Name[i] <= 'Z')
            Unite[i] = (int)Name[i] + 32;
        else
            Unite[i] = Name[i];
    }

    Unite[i] = '_';
    i++;

    for (int j = 0; Family[j] != '\0'; j++, i++)
    {
        if (Family[j] >= 'A' && Family[j] <= 'Z')
            Unite[i] = (int)Family[j] + 32;
        else
            Unite[i] = Family[j];
    }

    Unite[i] = '\0';
    cout << Unite;
}


int main()
{
    // filter();
    // hackerName();
    // nameCon();
    return 0;
}
