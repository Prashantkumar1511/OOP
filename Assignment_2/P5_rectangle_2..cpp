#include<iostream>
using namespace std;
class Rectangle {
private:
    int X1, X2, X3, X4, Y1, Y2, Y3, Y4;
public:
    int length, width, t, area, perimeter;
    Rectangle(int X1=0, int Y1=0, int X2=0, int Y2=0, int X3=0, int Y3=0, int X4=0, int Y4=0) {
        this->X1=X1;
        this->X2=X2;
        this->X3=X3;
        this->X4=X4;
        this->Y1=Y1;
        this->Y2=Y2;
        this->Y3=Y3;
        this->Y4=Y4;
    }
    void set(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
        if ((x1>0&&x1<=20)&&(x2>0&&x2<=20)&&(x3>0&&x3<=20)&&(x4>0&&x4<=20)&&(y1>0&&y1<=20)&&(y2>0&&y2<=20)&&(y3>0&&y3<=20)&&(y4>0&&y4<=20)) {
            if ((x1==x4)&&(x2==x3)&&(y3==y4)&&(y1==y2)||(x1==x2&&x3==x4&&y1==y4&&y2==y3)||(x1==x3&&x2==x4&&y1==y4&&y3==y2)||(x1==x4&&x2==x3&&y1==y3&&y2==y4)) {
                this->X1=x1;
                this->X2=x2;
                this->X3=x3;
                this->X4=x4;
                this->Y1=y1;
                this->Y2=y2;
                this->Y3=y3;
                this->Y4=y4;
            }
            else {
                cout<<"Rectangle cannot be made from these cordinates!"<<endl;
            }
        }
        else {
            cout<<"Please Enter the cordinates of first quardant only and less than 20 !"<<endl;
        }
    }
    void Length() {
        if (X1==X4&&X2==X3)
        {
            length=abs(X2-X1);
        }
        if (X1==X2&&X3==X4)
        {
            length=abs(X3-X1);
        }
        if (X1==X3&&X2==X4)
        {
            length=abs(X2-X3);
        }
        if (X1==X4&&X2==X3)
        {
            length=abs(X4-X2);
        }
    }
    void Width() {
        if (Y3==Y4&&Y1==Y2)
        {
            width=abs(Y4-Y2);
        }
        if (Y1==Y4&&Y2==Y3)
        {
            width=abs(Y4-Y3);
        }
        if (Y1==Y4&&Y3==Y2)
        {
            width=abs(Y1-Y3);
        }
        if (Y1==Y3&&Y2==Y4)
        {
            width=abs(Y3-Y2);
        }
    }
    void display()
    {
        if (length<width)
        {
            t=length;
            length=width;
            width=t;
        }
        cout<<"LENGTH is : "<<length<<endl;
        cout<<"WIDTH is : "<<width<<endl;

        if (length==width)
        {
            cout<<"this a square!"<<endl;
        }
    }

    void Area() {
        this->area=length*width;
        cout<<"AREA is  : "<<area<<endl;
    }
    void Perimeter()
    {
        this->perimeter=2*(length+width);
        cout<<"PERIMETER is : "<<perimeter<<endl;
    }
};
int main()
{
    Rectangle a;
    int x1, x2, x3, x4, y1, y2, y3, y4;
    cout<<"Enter the cordinates in order (X1,Y1),(X2,Y2),(X3,Y3),(X4,Y4): ";
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    a.set(x1, y1, x2, y2, x3, y3, x4, y4);
    a.Length();
    a.Width();
    a.display();
    a.Area();
    a.Perimeter();
    return 0;
}
