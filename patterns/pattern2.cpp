// This program prints a right-angled triangle of stars based on the height provided by the user.

#include <iostream>

using namespace std;

int main()
{
    int height;
    cout << "Enter the Height of the triangle: ";
    cin >> height;

    // Loop to print each row of the triangle
    for (int i = 1; i <= height; i++)
    {
        // Loop to print the stars in each row
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
