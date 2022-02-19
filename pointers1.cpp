#include <iostream>
#include <climits>

using namespace std;


int main()
{
    int A[2][3] = { {2,5, 9}, {6, 9, 15} };

    int a = 10;
    int *p = &a;

    cout << a << endl;
    cout << &a << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;

    return 0;
}