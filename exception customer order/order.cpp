#include"order.h"
#include"error.h"
#include<iostream>
#include<fstream>
using namespace std;
void customer_order::get()
{
    cout<<"Enter \nOrder number:";
    cin>>order_number;
    cout<<endl;
    if(order_number>9999)
    {
        throw error(1);
    }
    cout<<"\nPrice:";
    cin>>price;
    if(price>39.95)
    {
        throw error(2);
    }
    cout<<"\nQuantity:";
    cin>>quantity;
    if(quantity>50)
    {
        throw error(3);
    }
    total=price*quantity;
    if(total>1000)
    {
        throw error(4);
    }
}
void customer_order::show()
{
    cout<<"Order number:"<<order_number<<"\nPrice:"<<price<<"\nQuantity:"<<quantity<<"\nTotal_amount:"<<total<<endl;

}
void customer_order::save()
{
ofstream file1("output.txt");
file1<<order_number<<":"<<price<<":"<<quantity<<":"<<total;

}
