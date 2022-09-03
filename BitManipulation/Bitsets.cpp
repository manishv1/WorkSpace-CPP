#include<iostream>
#include<bitset>


using namespace std;


int main()
{
    bitset<8> bit_arr(20);
    cout<<bit_arr<<endl;
    cout<<bit_arr.count()<<endl;
    bit_arr = 30;
    cout<<bit_arr<<endl;
    cout<<bit_arr.count()<<endl;

    for(int i = 0; i < bit_arr.size() ; ++i){

        cout<<bit_arr[i]<<endl;
    }
    return 1;
}