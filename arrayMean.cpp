#include <iostream>
using namespace std;

int main()
{
    //declare and initialize variables
    int ten[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int sum = 0;
    int mean = 0;

    int size = *(&ten + 1) - ten;

    //loop and calculate the sum
    for (int x = 0; x < 10; x++)
    {
        sum = sum + ten[x];
    };
    mean = sum / 10;

    cout << "Mean is " << mean << "  \n";
    return 0;
}