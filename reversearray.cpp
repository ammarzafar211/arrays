#include <iostream>
using namespace std;
void reverseValues(int, int[]);

int main()
{
    int num;
    int arrayValues[num];
    reverseValues(num, arrayValues);
}

void reverseValues(int size, int Values[])
{
    cout << "Please Enter the Size of Array : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Please Enter the " << (i + 1) << "Value ";
        cin >> Values[i];
    }

    for (int i = (size - 1); i >= 0; i--)
    {
        cout << "here is the Reverse Order : " << Values[i] << endl;
    }
}