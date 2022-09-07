#include<bits/stdc++.h>
using namespace std;
 
 
 
int ToggleOddBits(int input){
int x=2;
while(x != 0){
input ^= x;
x= x<<2;
}
return input;
} 
 
int main()
{
    bitset<8> n;
    int a = 256-1;
    n = a;
    std::cout << "a   :"<<n << std::endl;
    n = ToggleOddBits(a);
    std::cout << "a   :"<<n << std::endl;
 
 
    return 0;
}


// // Function to set the kth bit of n
// int setBit(int n, int k)
// {
//     return (n | (1 << (k - 1)));
// }
  
// // Function to clear the kth bit of n
// int clearBit(int n, int k)
// {
//     return (n & (~(1 << (k - 1))));
// }
  
// // Function to toggle the kth bit of n
// int toggleBit(int n, int k)
// {
//     return (n ^ (1 << (k - 1)));
// }