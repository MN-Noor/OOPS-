#pragma once

class customer_order
{
    int order_number;
    int quantity;
    float price;
    float total;
    public:
  
    customer_order()
    {
order_number=0;
quantity=0;
price=0;
total=0;
    }
customer_order(int on,int q,float p,float t)
{
    order_number=on;
    quantity=q;
    price=p;
    total=t;
}

void get();
void show();
void save();

};