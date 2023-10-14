#include<bits/stdc++.h>
using namespace std;
 
vector<int> v = { 11,2,13,4,5,16,7,18,9};

map<int,int> m;

 
int main()
{
    for (int i = 0; i < v.size(); i++)
    {
        m[v[i]] = i;   
    }


   //show all elements to left of 5

   int idx = m[5];

   for (int i = 0; i < idx; i++)
   {
        std::cout << v[i]<<", " << std::endl;
    
   }
   
    return 0;

    
}


