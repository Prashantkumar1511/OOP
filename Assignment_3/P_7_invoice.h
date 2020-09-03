#include<iostream>
using namespace std;
class Invoice{
private:
string part_num,discription;
int quantity,price;
public:
    Invoice();
   
   void setPrice(int price);
   
    void setQuantity(int quantity);

    void setPart_num(string num);
   
    void setDiscription(string discription);
    
    string getPart_num();
  
    string getDiscription();
   
    int getPrice();
   
    int getQuantity();
  
    int calculate();


};