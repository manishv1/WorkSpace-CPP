#include<bits/stdc++.h>
using namespace std;
 

int factorial(int n)
{
    int f = 0;
    if(n == 1)
        return 1;
    
    f = n * factorial(n-1);
    return f;   
}
 
int fn(int n)
{

    if( n == 2)
        return 5;

    std::cout << "going in" << n <<  std::endl;
    fn(n-1);
    std::cout << "comming out" << n <<  std::endl;
     

} 
 
 
int main()
{
    
 
 //   int n = factorial(5);
    std::cout << "...." << fn(8)<< std::endl;
 
    return 0;
}