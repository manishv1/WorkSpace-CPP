#include<bits/stdc++.h>
using namespace std;
 
class CCTest
{
    private:
        int a;
        string b;
        vector<int> v;

    public:
        CCTest(int a, string b){

            this->a = a;
            this->b = b;
            for (int i = 0; i < 3; i++)
            {
                v.push_back(i);
            }
        }
          /*  When we have members which dynamically get initialized at run time, 
            the default copy constructor copies this member with the address of dynamically
            allocated memory and not a real copy of this memory.
            Now, both the objects point to the same memory, and changes in one reflects in another object.
            Further, the main disastrous effect is, when we delete one of these objects another object
            still points to the same memory, which will be a dangling pointer, and memory leak is also 
            a possible problem with this approach.
        */ 
        CCTest(const CCTest &obj){
            std::cout << "Copy Constructor of CCTest Called" << std::endl;    
            a = obj.a;
            b = obj.b;
            v = obj.v;             
        }


        // Allocating memeory to Vector in Constructor

      

        void print()
        {
            std::cout <<"Print object values..."<< "a   : "<<a<<"  b    : "<<b <<"  v"<<&v <<std::endl;

            for (int i = 0; i < v.size(); i++)
            {
                std::cout << "v"<<v[i] << std::endl;
            }
            
        }   

}; 
int main()
{
    
  CCTest z1(2,"Manish");
  CCTest z2 = z1;
  z1.print();
  z2.print(); 
  return 0;
}