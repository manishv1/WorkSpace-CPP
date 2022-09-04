#include<bits/stdc++.h>
using namespace std;
 

template <typename T>
void display(vector<T> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        std::cout << i<<"..."<< a[i] << std::endl;
        
    }
    

}
 
 
 
int main()
{
    
    vector<string> vs = {"ASD","qwe","per","zxc"};
    display<string>(vs); 
    return 0;
}