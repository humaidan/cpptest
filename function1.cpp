#include <iostream>
#include <climits>

using namespace std;

template <class T>
T maxim (T a, T b)
{
    return a>b ? a : b;
}

int main()
{
    int c = maxim (10, 5);
    cout << c << endl;

    float d = maxim(10.5f, 6.9f);
    cout << d << endl;

    return 0;
}
