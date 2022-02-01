#include <iostream>
using namespace std;

int main()
{
    int colcout = 0, rowcout = 0, rightdiagonal = 0, leftdiagonal = 0;
    int size = 2;

    int array[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "[" << (i + 1) << "]"
                 << "[" << (j + 1) << "] : ";
            cin >> array[i][j];

            rowcout += array[i][j]; //row addidtion
            colcout += array[j][i]; //colums additions
            if (i == j)             //right diagonal additions
            {
                leftdiagonal += array[i][j];
            }
            if ((i + j) == size - 1) //left diagonal additions
            {
                rightdiagonal += array[i][j];
            }
        }
    }

    if (rowcout == colcout && leftdiagonal == rightdiagonal)
    {
        cout << "Your matrix is magic saquare!" << endl;
    }
    else
    {
        cout << "Your matrix is not magic saquare!" << endl;
    }
}
