/*
   ---------------------------------------------------Shape(Base Class)---------------------------------------------------------------
   |                                                         |                                                                        |        
   |                                                         |                                                                        |  
   |                                                         |                                                                        |   
   |                                  ------------------------------------------------------------------                              |  
   |                                  |                                                                |                              |  
   |                                  |                                                                |                              |      
   |                         (Derived Class)                                                      (Derived CLass)                     |  
   |                            TwoDshape                                                            ThreeDshape                      |  
   |                                |                                                                    |                            |  
   |                                |                                                                    |                            |  
   |                   ---------------------------------                                        ------------------------              |  
   |                   |                               |                                       |                        |             |      
   |                   |                               |                                       |                        |             |   
   |             (Derived Class)                (Derived Class)                         (Derived Class)          (Derived CLass)      |   
   |                Square                         Rectangle                                 Sphere                   Cuboid          |  
   |                   |                               |                                       |                        |             |  
   |                   |                               |                                       |                        |             |  
   |                   |                               |                                       |                        |             |  
   |                   |                               |                                       |                        |             |  
   -----------------------------------------------------                                       ---------------------------------------- 
*/
#include <iostream>
using namespace std;

class Shape
{
public:
    Shape()
    {
        cout << "\n I am Base Class Shape  " << endl;
    }
};
class TwoDshape : public Shape
{
public:
    float length, breadth;
    TwoDshape()
    {
        cout << "I am TwoDshape class Derived From Shape Class " << endl;
    }
    float area()
    {
        return 0;
    }
};
class ThreeDshape:public Shape
{
public:
    float radius, height, length, breadth;
    ThreeDshape()
    {
        cout << "I am ThreeDshaape class Derived From Shape Class " << endl;
    }
};
class Square : public TwoDshape
{
public:
    Square()
    {
        cout << "I am a Square class Derived from TwoDshape Class" << endl;
    }
    float area()
    {

        cout << "Enter the side of Square " << endl;
        cin >> length;
        return length * length;
    }
};
class Rectangle : public TwoDshape
{
public:
    Rectangle()
    {
        cout << "I am a Rectangle class Derived From Class TwoDshape" << endl;
    }
    float area()
    {
        cout << "Enter the length and breadth " << endl;
        cin >> length >> breadth;
        return length * breadth;
    }
};
class Sphere : public ThreeDshape
{
public:
    Sphere()
    {
        cout << "I am Sphere class Derived From Class ThreeDshape " << endl;
    }
    float volume()
    {
        cout << "Enter the radius of Sphere " << endl;
        cin >> radius;
        return 3.14 * 1.33 * radius * radius * radius;
    }
};
class Cuboid : public ThreeDshape
{
public:
    Cuboid()
    {
        cout << "I am Cuboid class Derived From Class ThreeDshape" << endl;
    }
    float volume()
    {
        cout << "Enter the length,Breadth,Height of Cuboid " << endl;
        cin >> length >> breadth >> height;
        return length * breadth * height;
    }
};
int main()
{
    float area, volume;
    TwoDshape T;
    ThreeDshape t;
    Square S;
    area = S.area();
    cout << "The Area of Square is : " << area << endl;
    Rectangle R;
    area = R.area();
    cout << "The Area of Rectangle is : " << area << endl;
    Sphere sp;
    volume = sp.volume();
    cout << "The volume of Sphere is : " << volume << endl;
    Cuboid C;
    volume = C.volume();
    cout << "The Volume of Cuboid is : " << volume << endl;
}
