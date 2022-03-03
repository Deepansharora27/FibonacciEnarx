#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, nextTerm = 0, n;

    cout << "Enter the upper limit till which you want the Series ";
    cin >> n;

    cout << "Fibonacci Series: " << a << ", " << b << ", ";

    nextTerm = a + b;

    while (nextTerm <= n)
    {
        cout << nextTerm << ", ";
        a = b;
        b = nextTerm;
        nextTerm = a + b;
    }
    return 0;
}