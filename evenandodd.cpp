#include <iostream>
using namespace std;
void OddandEven(int, int[]);

int main()
{
    int size;
    int values[size];
    OddandEven(size, values);
}
void OddandEven(int size, int array[])
{
    int evencount = 0, oddcount = 0;
    cout << "Please Enter the Amount of Number You wanna predict : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Please Enter the " << (i + 1) << " Values ";
        cin >> array[i];
        if (array[i] % 2 == 0)
        {
            evencount += 1;
        }
        else
        {
            oddcount += 1;
        }
    }

    cout << "There are " << evencount << " Even Values and " << oddcount << " Odd Values in array " << endl;
}