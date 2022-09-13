#include<bits/stdc++.h>
using namespace std;
 


 
 
 
int main()
{
    vector<int>v = {1,2,3,4,5};
    stack<int>s;

    for (int i = 0; i < v.size(); i++)
    {
        s.push(v[i]);   
    }
    
    while (!s.empty())
    {
        std::cout << s.top() << std::endl;   
        s.pop();
    }
    
    
 
 
    return 0;
}