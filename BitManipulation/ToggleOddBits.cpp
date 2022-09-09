#include<bits/stdc++.h>
using namespace std;
 
int resetOddBits(int p)
{
    int mask = 0;
    int k = 0;
    int n = p;

    while( n > 0)
    {

        mask  = mask |  1 << k;
        k = k + 2;
        n = n >> 2;
    }

    return mask ^ p;
} 

int toggleOddBits(int n)
{
    int p = n;
    int k = 1;
    while( p > 0)
    {
        n = n ^ k;
        k = k << 2;
        p = p >> 2;
    }
  return n;

}
int toggleEvenBits(int n)
{
    int p = n;
    int k = 2;
    while( p > 0)
    {
        n = n ^ k;
        k = k << 2;
        p = p >> 2;
    }
  return n;

} 
int ToggleOddBits(int input){
    int x=2;
    int count=0;
    // ineffecient method : as loop runs 16 times
    while(x != 0){
        input ^= x;
        x = x<<2;
        ++count;
    }
    std::cout << "count  " << count << std::endl;
    return input;
} 
 
int main()
{
    bitset<9> n;
    int a = 211;
    n = a;
    std::cout << "a   :"<<n << std::endl;
    n = toggleOddBits(a);
   // n = resetOddBits(a);
    std::cout << "a   :"<<n << std::endl;
    n = toggleEvenBits(a);
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