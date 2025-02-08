// This program prints a losenge shape made of stars based on the size provided by the user.

#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the triangle: ";
    cin >> size;

    // Loop to print the upper part of the losenge
    for (int i = 1; i < size; i++)
    {
        // Loop to print spaces before the stars
        for (int k = size - i; k > 0; k--)
        {
            cout << " ";
        }
        // Loop to print the stars in each row
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // Loop to print the lower part of the losenge
    for (int i = size; i >= 0; i--)
    {
        // Loop to print spaces before the stars
        for (int k = size - i; k > 0; k--)
        {
            cout << " ";
        }
        // Loop to print the stars in each row
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
