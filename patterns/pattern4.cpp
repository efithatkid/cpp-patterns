// This program prints a right-angled triangle of stars with spaces on the left side.

#include <iostream>

using namespace std;

int main()
{
    int size = 5;
    // Loop to print each row of the triangle
    for (int i = 1; i <= size; i++)
    {
        // Loop to print spaces and stars in each row
        for (int j = 1; j <= size; j++)
        {
            if (i > j)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
