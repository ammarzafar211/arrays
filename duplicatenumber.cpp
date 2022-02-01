#include <iostream>
using namespace std;
void DuplicateNumber(int, int[]);

int main()
{
    int size;
    int values[size];
    DuplicateNumber(size, values);
}

void DuplicateNumber(int size, int array[])
{
    cout << "Pleae Enter the Size of An Array : ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << (i + 1) << " Values : ";
        cin >> array[i];
    }

    cout << "Duplicate Values are given below " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] == array[j])
            {
                cout << array[i] << endl;
            }
        }
    }
}