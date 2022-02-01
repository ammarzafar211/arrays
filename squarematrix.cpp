#include <iostream>
using namespace std;
int main()
{
    int rightdiagonal = 0, leftdiagonal = 0, size;
    cout << "Please Input the Number of Rows & Colums : ";
    cin >> size;

    int array[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "[" << (i + 1) << "]"
                 << "[" << (j + 1) << "] : ";
            cin >> array[i][j];

            if (i == j) //right diagonal additions
            {
                leftdiagonal += array[i][j];
            }
            if ((i + j) == size - 1) //left diagonal additions
            {
                rightdiagonal += array[i][j];
            }
        }
    }

    cout << "Here is the 2D Array.." << endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << array[i][j] << " \t";
        }
        cout << endl;
    }

    cout << "Left diagonal's Sum is : " << leftdiagonal << endl;
    cout << "Right Diagonal's Sum is : " << rightdiagonal << endl;
}