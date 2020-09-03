#include<iostream>
using namespace std;
class Invoice{
private:
string part_num,discription;
int quantity,price;
public:
    Invoice(int quantity=0,int price=0,string part_num="abc",string discription="GOOd")
    {
        this->quantity=0;
        this->price=0;
        this->part_num="abc";
        this->discription="GOOD";
    }
    void setPrice(int price)
    {
        if(price<0)
        {
            this->price=0;
        }
        else{
            this->price=price;
        }
    }
    void setQuantity(int quantity)
    {
        if(quantity<0)
        {
            this->quantity=0;
        }
        else{
            this->quantity=quantity ;
        }
    }
    void setPart_num(string num)
    {
        this->part_num=num;
    }
    void setDiscription(string discription)
    {
        this->discription=discription;
    }
    string getPart_num()
    {
        return part_num;
    }
    string getDiscription()
    {
        return discription;
    }
    int getPrice()
    {
        return price;
    }
    int getQuantity()
    {
        return quantity;
    }
    int calculate()
    {
        int sum=0;
        sum=quantity*price;
        return sum;
    }

};
int main()
{
    Invoice A;
    int price,quantity;
    string part_num,discription;
  
   
        cout<<"Enter products Part number :  ";
        cin>>part_num;
        A.setPart_num(part_num);
        cout<<"Enter Product's quantity :  ";
        cin>>quantity;
        A.setQuantity(quantity);
        cout<<"Enter product's Price :  ";
        cin>>price;
        A.setPrice(price);
        cout<<"Enter Discription :  ";
        cin>>discription;
        A.setDiscription(discription);
        int Sum=A.calculate();
        cout<<"Part number : "<<A.getPart_num()<<"  "<<"Quantity :  "<<A.getQuantity()<<"  "<<"Product's price :  "<<A.getPrice()<<"  "<<"Total price : "<<Sum<<"  "<<"DIscription :  "<<A.getDiscription();
        return 0;

        
    
}