#include <iostream>
using namespace std;
int main()
{
    int col, row;
    cout << "please Enter the Number of Colums : ";
    cin >> col;
    cout << "Please Enter the Number of Rows : ";
    cin >> row;

    int array[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "[" << (i + 1) << "]"
                 << "[" << (j + 1) << "] : ";
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << " \t";
        }
        cout << endl;
    }
    cout << "Upper half values.." << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i <= j)
            {
                cout << array[i][j] << " \t";
            }
            else
            {
                cout << " \t";
            }
        }
        cout << endl;
    }
}