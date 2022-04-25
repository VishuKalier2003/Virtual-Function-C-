// Implementation of Virtual Function...
#include <iostream>
using namespace std;
class Quadilateral
{
    public:
        int sides;
        int s1, s2, s3, s4;
        Quadilateral()
        {sides = 4; s1 = 0; s2= 0; s3 = 0; s4 = 0;}
        Quadilateral(int a, int b, int c, int d)
        {sides = 4; s1 = a; s2 = b; s3 = c; s4 = d;}
        virtual void Area()
        {
            cout << "An Area of A General Quadilateral cannot be determined" << endl;
        }
        int Perimeter()
        {
            cout << "Quadilateral class function is called !!" << endl;
            return s1 + s2 + s3 + s4;
        }
};
class Trapezium: public Quadilateral
{
    public:
        int parallel1, parallel2;
        int height;
        Trapezium(int p1, int p2, int h)
        {parallel1 = p1; parallel2 = p2; height = h;}
        void Area()
        {
            double area = (0.5) * ((parallel1 + parallel2) * height);
            cout << "The Area of Trapezium is : " << area << endl;
        }
        int Perimeter()
        {
            cout << "Trapezium class Parameter is called !!" << endl;
            return s1 + s2 + s3 + s4;
        }
};
class Square: public Quadilateral
{
    public:
        int Side;
        Square(int s)
        {Side = s;}
        void Area()
        {
            int area = Side * Side;
            cout << "The Area of the Square is : " << area << endl;
        }
        int Perimeter()
        {
            cout << "The Square Parameter function is called !!" << endl;
            return s1 + s2 + s3 + s4;
        }
};
class Kite:public Quadilateral
{
    public:
        int diagonal1, diagonal2;
        Kite(int d1, int d2)
        {diagonal1 = d1; diagonal2 = d2;}
        void Area()
        {
            int area = diagonal1 * diagonal2;
            cout << "The Area of the Kite is : " << area << endl;
        }
        int Perimeter()
        {
            cout << "The Kite Parameter function was called !!" << endl;
            return s1 + s2 + s3 + s4;
        }
};
int main()
{
    Quadilateral *quad;
    Trapezium trapezium(10, 5, 2);
    Square square(4);
    Kite kite(8, 10);
    quad = &trapezium;
    cout << "Virtual Function : " << endl;
    quad -> Area();
    cout << "Non-Virtual Function : " << endl;
    int x = quad -> Perimeter();
    cout << "The Perimeter is : " << x << endl;
    return 0;
}