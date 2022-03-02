#include <iostream>
using namespace std;

class Rectangle
{
    public:
        int length; 
        int breadth;

        int area()
        {
            return length * breadth;
        }

        int perimeter()
        {
            return 2*(length+breadth);
        }
};


int main()
{
    Rectangle* p = new Rectangle();
    p->length = 10;
    p->breadth = 5;

    cout << "Area is: " << p->area() << endl;
    cout << "Perimeter is: " << p->perimeter() << endl;
}