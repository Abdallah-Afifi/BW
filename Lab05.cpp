
#include <iostream>
using namespace std;

int main()
{
    char color;
    cout << "Enter a character B pr W: ";
    cin >> color;

    if (color == 'B' || color == 'b')
        cout << "Black" << '\n';
    else if (color == 'W' || color == 'w')
        cout << "White" << '\n';
    else 
        cout << "Invalid Input Charachter" << '\n';

    return 0;
}

