#include <iostream>

using namespace std;

int main ()
{
    // Program introduction.
    cout << endl;
    cout << "This program will compute the disciminant of a quadratic equation." << endl;
    cout << "******************************************************************" << endl;
    cout << endl;

    // Prompt user for input and store three integer variables.
    int  a, b, c;
    cout << "Please enter integer value for 'a', 'b', and 'c' separated by a space or return:" << endl;
    cin >> a >> b >> c;
    cout << endl;

    // Compute result and display to user.
    cout << "Discriminant for the quadratic equation " << a << "x^2 + " << b << "x + " << c << " is: ";
    cout << (b * b) - (4 * a * c) << endl;
    
    // Exit program.
    return 0;
}