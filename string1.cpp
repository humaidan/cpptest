#include <iostream>
#include <climits>
#include <string>

using namespace std;


int main()
{
    string str = "today";

    string::iterator it;

    for (it=str.begin(); it!=str.end(); it++)
    {
        *it -= 32;
        cout << *it;
    }

    cout << endl << endl;

    return 0;
}