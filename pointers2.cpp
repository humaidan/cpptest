#include <iostream>
#include <climits>

using namespace std;


int main()
{
    int *p = new int[20];

    delete []p;
    p = new int[40];

    int x = 10;
    int &y = x;

    cout << x << endl;
    x++;
    y++;
    cout << x << endl;
    cout << &x << " " << &y << endl;

    return 0;
}