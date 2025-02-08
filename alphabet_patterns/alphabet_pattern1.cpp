// This program prints a right-angled triangle of alphabets starting from 'a' based on the size provided by the user.

#include <iostream>

using namespace std;

int main()
{
    int size;
    int character = 97;
    cout << "Enter the size of the triangle: ";
    cin >> size;

    // Loop to print each row of the triangle
    for (int i = 1; i <= size; i++)
    {
        // Loop to print the characters in each row
        for (int j = 1; j <= i; j++)
        {
            cout << static_cast<char>(character);
        }
        character++;
        cout << endl;
    }
    return 0;
}
