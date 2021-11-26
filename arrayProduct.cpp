#include <iostream>
using namespace std;

int main()

{
    //declare and initialize variables
    double ten[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    double product = 1;

    //loop and calculate the sum
    for (int x = 0; x < 10; x++)
    {
        product = product * ten[x];
        cout << product << "\n";
    };
    cout << "Total product is " << product << "  \n";
    return 0;
}
