#include <iostream>
using namespace std;

int main()
{
    //declare and initialize variables
    int ten[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int product = 1;

    int size = *(&ten + 1) - ten;

    //loop and calculate the sum
    for (int x = 0; x < 10;)
    {
        product = product * ten[x];
    };
    cout << "Total product is " << product << "  \n";
    return 0;
}