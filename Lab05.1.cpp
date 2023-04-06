#include <iostream>
using namespace std;

int main()
{
    char color;
    cout << "Enter a character B or W: ";
    cin >> color;

    switch (color)
    {
    case 'W': case 'w':
        cout << "White" << '\n';
        break;

    case 'B': case 'b':
        cout << "Black" << '\n';
        break;

    default: cout << "Invalid Input Character" << '\n';

    }
    return 0;
}


