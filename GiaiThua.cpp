#include <iostream>
using namespace std;

double Fn(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return n * Fn(n - 1);
}

int main()
{
    cout << Fn(3);
}