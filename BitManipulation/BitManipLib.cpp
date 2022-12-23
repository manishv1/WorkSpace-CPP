#include<bits/stdc++.h>
using namespace std;
 


 // toggle a bit

vector<int> toBinary(unsigned int x)
{
    vector<int> v;
    while( x!= 0)
    {
        if(x%2)
            v.push_back(1);
        else
            v.push_back(0);       

        x = x/2;     
    }
    reverse(v.begin(), v.end());
    for(auto i:v)
        cout<< i;
    
    cout<<endl;
    return v;
}

void bitToggle(bitset<32> &word, int bitIdx)
 {
     unsigned msk = 1 << bitIdx;
     word ^= msk;
 }

 void bitToggle1(unsigned int &word, int bitIdx)
 {
    unsigned msk = 1 << bitIdx;
     word ^= msk;

 }
 
int main()
{
    unsigned int x = 8;
    // bitset<32> word(0);
    // cout<<word<<endl;
    // bitToggle(word,34);
    // cout<<word<<endl;
    // unsigned int word1 = 0;
    // bitToggle1(word1,3);
    // cout<<endl<<endl<<word1;
    toBinary(x);
    return 0;
}