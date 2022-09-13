#include<bits/stdc++.h>
using namespace std;
 
 
 class CC
 {
    private:
      int a;
      int b;
    public:

       // CC(){};
        CC(int x = 10, int y = 20) : a(x), b(y)
        {


        } 

        CC(CC &obj){

            std::cout << "Calling Copy Constructor "<< std::endl;
            a = obj.a;
            b = obj.b;
        }

        CC fn()
        {

            return *this;
        }
 };
 

 
 
int main()
{
    
    CC c1(1,1);

    CC c2;

    c2 = c1.fn();    
 
 
    return 0;
}