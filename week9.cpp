#include <iostream>
#include <cmath>
using namespace std;

const int MAX_SIZE = 100;

void fillMatrix(int arr[][MAX_SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }
}

void printMatrix(int arr[][MAX_SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
            if (arr[i][j] < 10)
                cout << ' ';
        }
        cout << endl;
    }
}

void fillSqMatrix(int arr[][MAX_SIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }
}

void printMatrixCC(int arr[][MAX_SIZE], int size)
{
    int cols = size, rows = size, cnt = 0;
    int i, c = 0, r = 0;
    int total = rows * cols;
    while (r < rows && c < cols)
    {
        if (cnt == total)
            break;

        for (i = r; i < rows; ++i)
        {
            cout << arr[i][c] << " ";
            cnt++;
        }
        c++;

        if (cnt == total)
            break;

        for (i = c; i < cols; ++i)
        {
            cout << arr[cols - 1][i] << " ";
            cnt++;
        }
        rows--;

        if (cnt == total)
            break;

        if (r < rows)
        {
            for (i = rows - 1; i >= r; --i)
            {
                cout << arr[i][cols - 1] << " ";
                cnt++;
            }
            cols--;
        }

        if (cnt == total)
            break;

        if (c < cols)
        {
            for (i = cols - 1; i >= c; --i)
            {
                cout << arr[r][i] << " ";
                cnt++;
            }
            r++;
        }
    }
}

void fillArray(int size, int arr[])
{
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
}

void printArray(int size, int arr[])
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
}

bool hasRepeating(int size, int arr[])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
                return false;
        }
    }
    return true;
}

bool task2()
{
    int subsetSize;
    cout << "Enter the size of the subset: ";
    cin >> subsetSize;
    int subset[subsetSize];
    fillArray(subsetSize, subset);
    if (!hasRepeating(subsetSize, subset))
    {
        do
        {
            cout << "Repeating elements in the subset! Fill again: " << endl;
            fillArray(subsetSize, subset);
        } while (!hasRepeating(subsetSize, subset));
    }

    int setSize;
    cout << endl
         << "Enter the size of the set: ";
    cin >> setSize;
    int set[setSize];
    if (setSize < subsetSize)
    {
        do
        {
            cout << "setSize must be bigger than subsetSize!" << endl
                 << "Enter a new value: ";
            cin >> setSize;
        } while (setSize < subsetSize);
    }
    fillArray(setSize, set);

    printArray(subsetSize, subset);
    cout << endl;
    printArray(setSize, set);

    bool flag = false;

    for (int i = 0; i < subsetSize; i++)
    {
        flag = false;
        for (int j = 0; j < setSize; j++)
        {
            if (subset[i] == set[j])
            {
                flag = true;
                break;
                // cout << subset[i] << " == " << set[j] << "  They are the same!" << endl;
            }
        }
        if (!flag)
            return false;
    }
    return true;
}

void rotateMatrix(int arr[][MAX_SIZE], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        for (int j = i; j < size - i - 1; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[size - 1 - j][i];
            arr[size - 1 - j][i] = arr[size - 1 - i][size - 1 - j];
            arr[size - 1 - i][size - 1 - j] = arr[j][size - 1 - i];
            arr[j][size - 1 - i] = temp;
        }
    }
}

void multiplyMatrix(int matrix1[][MAX_SIZE], int row1, int col1, int matrix2[][MAX_SIZE], int row2, int col2, int result[][MAX_SIZE])
{
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            for (int k = 0; k < col1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main()
{
    CreateSqAndNormalMatrix()
    {
        int arr[MAX_SIZE][MAX_SIZE];
        int cols, rows, size;
        cout << "Size of the matrix: ";
        cin >> size;
        cout << "Number of rows: ";
        cin >> rows;
        cout << "Number of colums: ";
        cin >> cols;

        fillMatrix(arr, rows, cols);
        printMatrix(arr, rows, cols);

        fillSqMatrix(arr, size);
        cout << endl;
        printMatrix(arr, size, size);
        cout << endl;
        printMatrixCC(arr, size);
    }

    isSubset()
    {
        if (task2())
        {
            cout << endl
                 << "YES, it is a subset!";
        }
        else
        {
            cout << endl
                 << "NO, it is NOT a subset!";
        }
    }

    RotateMatrix90()
    {
        fillSqMatrix(arr, size);
        cout << endl;
        printMatrix(arr, size, size);
        rotateMatrix(arr, size);
        cout << endl;
        printMatrix(arr, size, size);
    }

    MultiplyingMatrix()
    {
        int a[MAX_SIZE][MAX_SIZE];
        int b[MAX_SIZE][MAX_SIZE];
        int rowA, colA, rowB, colB;
        cout << "Numer of rows and colums for matrix A: ";
        cin >> rowA >> colA;
        cout << endl
             << "Numer of rows and colums for matrix B: ";
        cin >> rowB >> colB;

        if (colA != rowB)
        {
            cout << "NO!You can't multiply those matrices!";
        }
        else
        {
            cout << "Fill matrix A: " << endl;
            fillMatrix(a, rowA, colA);
            cout << endl
                 << "Fill matrix B: " << endl;
            fillMatrix(b, rowB, colB);

            cout << endl;
            printMatrix(a, rowA, colA);
            cout << endl;
            printMatrix(b, rowB, colB);

            int result[MAX_SIZE][MAX_SIZE];
            cout << endl
                 << "YES!You can multiply those matrices!"
                 << "\nResult: " << endl;
            multiplyMatrix(a, rowA, rowB, b, rowB, colB, result);
            printMatrix(result, rowA, colB);
        }
    }


    return 0;
}