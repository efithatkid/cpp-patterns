// This program prints two different patterns of right-angled triangles of stars based on the size provided by the user.

#include <iostream>

using namespace std;

void solution1(int size);
void solution2(int size);

int main()
{
    int size;
    cout << "Enter the size of the triangle: ";
    cin >> size;
    solution1(size);
    cout << endl;
    solution2(size);
}

void solution1(int size)
{
    // Loop to print each row of the triangle
    for (int i = size; i >= 1; i--)
    {
        // Loop to print spaces and stars in each row
        for (int k = 1; k <= i; k++)
        {
            if (k == i)
            {
                for (int j = i; j <= size; j++)
                {
                    cout << "*";
                }
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void solution2(int size)
{
    // Loop to print each row of the triangle
    for (int i = 1; i <= size; i++)
    {
        // Loop to print spaces before the stars
        for (int k = size - i; k > 0; k--)
        {
            cout << " ";
        }
        // Loop to print the stars in each row
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
