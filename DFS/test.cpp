#include<bits/stdc++.h>
using namespace std;
 

template <typename T, typename Q>
void print(vector<T> a, vector<Q> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        std::cout << i<<"..."<< a[i] << std::endl;
        
    }
    for (int i = 0; i < b.size(); i++)
    {
        std::cout << i<<"..."<< b[i] << std::endl;
        
    }   

}


 
int main()
{
    
    vector<string> vs = {"ASD","qwe","per","zxc"};
    vector<int> v = {0,1,2,3,4,5,6,7,8};
    print<int,string>(v,vs);
 
    return 0;
}