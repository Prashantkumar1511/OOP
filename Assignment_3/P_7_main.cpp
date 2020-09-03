#include<iostream>
#include"P_7_invoice.h"
using namespace std;

int main()
{
    Invoice A;
    int price,quantity;
    string part_num,discription;
  
   
        cout<<"Enter product's Part number :  ";
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
