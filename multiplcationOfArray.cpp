#include <iostream>
using namespace std;
int main()
{
    int firstDif = 2, secDif = 4, sameNum = 3;
    int firstArray[firstDif][sameNum], secondArray[sameNum][secDif], finalArray[2][4];

    cout << "Input the Values of First Array " << endl;
    for (int i = 0; i < firstDif; i++) //firstArray
    {
        for (int j = 0; j < sameNum; j++)
        {
            cout << "[" << (i + 1) << "]"
                 << "[" << (j + 1) << "] : ";
            cin >> firstArray[i][j];
        }
    }

    cout << "Input the Values of Second Array " << endl;
    for (int i = 0; i < sameNum; i++) //SecondArray
    {
        for (int j = 0; j < secDif; j++)
        {
            cout << "[" << (i + 1) << "]"
                 << "[" << (j + 1) << "] : ";
            cin >> firstArray[i][j];
        }
    }
    for (int i = 0; i < sameNum; i++)
    {
        for (int j = 0; j < secDif; j++)
        {
            for (int k = 0; k < sameNum; k++)
            {
                finalArray[i][j] += firstArray[i][k] * secondArray[k][j];
            }
        }
    }

    for (int i = 0; i < sameNum; i++)
    {
        for (int j = 0; j < secDif; j++)
        {
            cout << finalArray[i][j] << " \t";
        }
        cout << endl;
    }
}