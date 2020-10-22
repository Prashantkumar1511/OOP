#include<iostream>
using namespace std;
class Car{
    public:
    int x;
    Car()
    {
        cout<<" \n I am Base Class Car (Default Constructor)"<<endl;
    }
    ~Car()
    {
        cout<<"\n I am Destructor of Car Class "<<endl;
    }

};
class Toyota:public Car
{   
    public:
        Toyota()
        {
            cout<<"I am Toyota Class Derived From Car Class (Default constructor)"<<endl;
            
        }
        Toyota(int x)
        {
            this->x=x;
            cout<<"Base Price of Toyota Car is Rs. "<<x<<"Lacs.(Parameterised Constructor)"<<endl;

        }
       ~Toyota()
       {
           cout<<"I am Destructor of Class Toyota"<<endl;
       }
};
class Suzuki:public Car
{
    public:
    Suzuki()
    {
        cout<<"I am Suzuki Class Derived From Class Car (Default Constructor)"<<endl;
    }
    ~Suzuki()
    {
        cout<<"I am Destructor of Class Suzuki "<<endl;
    }
    Suzuki(int x)
    {
        cout<<"Base Price of Car is Rs. "<<x<<"lacs.(Parameterised constructor)"<<endl;
    }
};
class FourWheeler:public Toyota,public Suzuki{
public:
       FourWheeler()
       {
           cout<<"I am Fourwheeler Class Derived From Class Toyota and Suzuki "<<endl;           
       }
   


};
class Etios:public Toyota{
    public:
    int x;
        Etios()
        {
            cout<<"This is the Etios Class Derived From Toyota Class(Default Constructor)"<<endl;
        }
        Etios(int x):Toyota(x){
            this->x=x;
    
        }

};
class Swift:public Suzuki
{
public:
    Swift()
    {
        cout<<"this is Swift Class Derived From Class Suzuki(Default Constructor)"<<endl;
    }
    Swift(int x):Suzuki(x)
    {
       this->x=x;
    }
};
int main()
{
    Toyota T;
    Suzuki S;
    FourWheeler F;
    Etios E(10);
    Swift s(7);
  
    

}