#include <iostream>

using namespace std;

int sumSize(char *source)
{
    int count = 0, total = 0;
    for(int i = 0; source[i] != '\0'; i++)
    {
        if(source[i] >= 'A' && source[i] <= 'Z') total++;

        if(source[i] >= '0' && source[i] <= '9')
        {
            int num = 0;
            while (source[i] >= '0' && source[i] <= '9')
            {
                num = num * 10 + source[i] - '0';
                i++;
            }
            i=i+1;
            for(;source[i] != ')'; i++)
            {
                count++;
            }
            count = count * num;
        }
        total = total + count;
        count = 0;
    }
    return total;
}

void decompress(char *source, int i)
{
    
}


int main()
{
    char source[32];
    cout << "Enter compressed string: ";
    cin.getline(source,32);

    int size = sumSize(source);
   
    char *result = new char[size];


    return 0;
}