#include<iostream>
#include<bitset>



using namespace std;


int main()
{

    int i = 0;
    int n = 0;
    int b = 1;
    bitset<8> bit;
    while( i < 5){

        n |= 1 << i;
        i = i+2;
    }
    bit = n;
    cout<<endl<<bit<<endl;
    return 1;
}