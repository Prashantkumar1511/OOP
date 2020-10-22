/*       -----------------------------------Quardilateral(Base Class)--------------------------------------------------
         |                                              |                                                             |
         |                                              |                                                             |
         |             -----------------------------------------------------------------------                        |
         |             |                  |                      |                          |                         |
         |       (Derived Class)   (Derived Class)         (Derived Class)            (Derived Class)                 |                           
         |         Trapezoid          Rectangle                Sqaure                  Parallelogram                  |   
         |             |                  |                      |                           |                        |
         |             |                  |                      |                           |                        |
         |             |                  |                      |                           |                        |
         ----------------------------------                      ------------------------------------------------------
         
         This is Single Heirarchy.


*/
#include <iostream>
using namespace std;
class Quardilateral
{
public:
    Quardilateral()
    {
        cout << "Quardilateral is the base class" << endl;
    }
    void perimeter()
    {
        cout << "Perimeter is sum of length of all sides " << endl;
    }
    void area()
    {
    }
};

class Trapezoid : public Quardilateral
{
public:
    int a, b, c, d, e;
    float Area;
    Trapezoid()
    {
        cout << "Trapezoid is derived from Quardilateral class " << endl;
    }
    float area()
    {
        cout << "enter the length of parallel sides : " << endl;
        cin >> a >> b;
        cout << "enter the height : " << endl;
        cin >> c;
        Area = float(0.5* (a + b) * c);
        return Area;
    }
    float perimeter()
    {
        cout << "enter the length of non parallel sides : " << endl;
        cin >> d >> e;
        int Perimeter = a + b + d + e;
        return Perimeter;
    }
};
class Rectangle : public Quardilateral
{
public:
    float a, b;
    Rectangle()
    {
        cout << "Rectangle is derived from Quardilateral class " << endl;
    }
    float area()
    {
        cout << "enter the sides of rectangle : " << endl;

        cin >> a >> b;
        float Area = a * b;
        return Area;
    }
    float perimeter()
    {
        float Perimeter = 2 * (a + b);
        return Perimeter;
    }
};
class Sqaure : public Quardilateral
{
public:
    float a;
    Sqaure()
    {
        cout << "Square is derived from Quardilateral class " << endl;
    }
    float area()
    {
        cout << "enter the side of square : " << endl;
        cin >> a;
        float Area = a * a;
        return Area;
    }
    float perimeter()
    {
        float Perimeter = 4 * a;
        return Perimeter;
    }
};
class Parallelogram : public Quardilateral
{
public:
    float  b, c, d, height, base;
    Parallelogram()
    {
        cout << "Parallelogram is derived from Quardilateral class" << endl;
    }
    float area()
    {
        cout << "enter the base with coressponding height : " << endl;
        cin >> base >> height;
        float Area = base * height;
        return Area;
    }
    float perimeter()
    {
        cout << "enter the reamining  sides " << endl;
        cin >>b >> c >> d;
        float Perimeter = base+ b + c + d;
        return Perimeter;
    }
};
int main()
{
    int ch;
    float result, result1;
    cout << "enter the type of Qaurdilateral you want to work on :" << endl;
    cout << "1.Trapezoid \n 2. Rectangle \n 3.Sqaure \n 4. Parallelogram " << endl;
    cin >> ch;
    switch (ch)

    {
    case 1:
    {
        Trapezoid t;
        result1 = t.area();
        cout << "The Area of Trapezoid is : " << result1 << endl;
        result = t.perimeter();
        cout << "The paramter of Trapezoid is : " << result << endl;
        break;
    }
    case 2:
    {
        Rectangle r;
        result1 = r.area();
        cout << "the Area of Rectangle is : " << result1 << endl;
        result = r.perimeter();
        cout << "the parameter of Rectangle is : " << result << endl;
        break;
    }

    case 3:
    {
        Sqaure s;
        result1 = s.area();
        cout << "the area of Square is : " << result1 << endl;
        result = s.perimeter();
        cout << "the parameter of Square is : " << result << endl;
        break;
    }

    case 4:
    {
        Parallelogram P;
        result1 = P.area();
        cout << "Area of Parallelogram is : " << result1 << endl;
        result = P.perimeter();
        cout << "Paramter of Parallelogram is : " << result << endl;
        break;
    }
    default:
        cout << "Invalid choice ! " << endl;
    }
}