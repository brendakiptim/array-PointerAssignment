#include <iostream>
using namespace std;

int main()
{
    double number1, number2;
    number1 = 7.3;

    double *ptr = &number1;
    cout << " Object pointed to by ptr: " << ptr << " \n";

    number2 = *ptr;

    cout << " Value of number1 address: " << &number1 << "\n";
    cout << " Value of ptr address: " << &ptr << "\n";
    cout << " Value of number 2: " << number2 << "\n";

    return 0;
}