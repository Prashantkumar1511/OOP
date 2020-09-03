#include<iostream>
#include"P_7_invoice.h"
using namespace std;

   Invoice:: Invoice()
    {
        this->quantity=0;
        this->price=0;
        this->part_num="abc";
        this->discription="GOOD";
    }
    void Invoice::setPrice(int price)
    {
        if(price<0)
        {
            this->price=0;
        }
        else{
            this->price=price;
        }
    }
    void Invoice:: setQuantity(int quantity)
    {
        if(quantity<0)
        {
            this->quantity=0;
        }
        else{
            this->quantity=quantity ;
        }
    }
    void Invoice:: setPart_num(string num)
    {
        this->part_num=num;
    }
    void Invoice:: setDiscription(string discription)
    {
        this->discription=discription;
    }
    string Invoice:: getPart_num()
    {
        return part_num;
    }
    string Invoice:: getDiscription()
    {
        return discription;
    }
    int Invoice:: getPrice()
    {
        return price;
    }
    int Invoice:: getQuantity()
    {
        return quantity;
    }
    int Invoice:: calculate()
    {
        int sum=0;
        sum=quantity*price;
        return sum;
    }

