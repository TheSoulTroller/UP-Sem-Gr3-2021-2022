#include <iostream>

using namespace std;

int strlen(char *str)
{
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}

void addToStr(char *&str, int &size, char symbol)
{
    if (size != 0)
    {
        char *temp = new char[size];
        for (int i = 0; i < size; i++)
        {
            temp[i] = str[i];
        }

        ++size;
        str = new char[size];
        for (int i = 0; i < size - 1; i++)
        {
            str[i] = temp[i];
        }
        delete[] temp;

        str[size - 1] = symbol;
        // cout << symbol << endl;
        // cout << str << endl;
        // cout << "Size: " << size << endl;
    }
    else
    {
        size = size + 1;
        str[size-1] = symbol;
    }
}

int getNum(char *source, int i)
{
    int num = 0;
    while (source[i] >= '0' && source[i] <= '9')
    {
        num = num * 10 + source[i] - '0';
        i++;
    }
    return num;
}

void repeat(char *source, int i, char *&current, int &sizeCurr)
{
    while((source[i] >= '0' && source[i] <= '9') || source[i] == '(')
    {
        i++;
    }
    while(source[i] != ')')
    {
        if (source[i] >= 'A' && source[i] <= 'Z')
        {
            // cout << "1" << endl;
            addToStr(current, sizeCurr, source[i]);
            i++;
        }
        else if (source[i] >= '0' && source[i] <= '9')
        {
            for (int j = 0; j < getNum(source, i); j++)
            {
                cout << "Enter2" << endl;
                repeat(source,i,current,sizeCurr);
            }
        }
    }
}

int countDig(int num)
{
    int count = 0;
    while(num > 0)
    {
        count++;
        num = num / 10;
    }
    return count;
}

char *decompress(char source[], int size, char *&current, int &sizeCurr, int i)
{
    // cout << source << endl << source[i] << endl;

    if(i == size-1) return current;

    if(source[i] >= 'A' && source[i] <= 'Z')
    {
        // cout << "2" << endl;
        addToStr(current, sizeCurr, source[i]);
    }
    else if(source[i] >= '0' && source[i] <= '9')
    {
        for(int j = 0; j < getNum(source,i);j++)
        {
            repeat(source,i,current,sizeCurr);
        }

        for(int j = i; j < countDig(getNum(source,i)); j++)
        {
            source[j] = '0';
            i++;
        }
        
        while(source[i] != ')')
        {
            source[i] = '0';
            i++;
        }

        source[i] = '0';
    }

    return decompress(source, size, current, sizeCurr, ++i);
}

void printStr(char *source, int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << source[i];
    }
    cout << endl;
}

int main()
{
    char source[32];
    cout << "Enter compressed string: ";
    cin.getline(source,n+1);

    int size = strlen(source);
    int sizeCurr = 0;
    char *result = new char[0];
    
    cout << decompress(source, size, result, sizeCurr, 0);

    return 0;
}

