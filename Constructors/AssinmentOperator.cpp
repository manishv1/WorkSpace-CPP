#include<bits/stdc++.h>
using namespace std;
 
 
 
class AssinmentOperator
{
private:
    /* data */
    int a;
    int b;
public:
    AssinmentOperator(){};
    AssinmentOperator(int a, int b);
    ~AssinmentOperator();
    AssinmentOperator& operator = (AssinmentOperator &obj);
   void print();
};

AssinmentOperator::AssinmentOperator(int a, int b)
{
    this->a = a;
    this->b = b;
}

AssinmentOperator::~AssinmentOperator()
{

}

void AssinmentOperator::print(){

    cout<<"a   "<<a<<"  b   "<<b<<endl;
}

AssinmentOperator&  AssinmentOperator:: operator = (AssinmentOperator &obj)
{
    this->a = obj.a;
    this->b = obj.b;
    return *this;
}
 
 
int main()
{
    AssinmentOperator a1(12,12);
    AssinmentOperator a2,a3;
    a2 = a3 = a1; 
    a2.print();
    a3.print(); 
    return 0;
}