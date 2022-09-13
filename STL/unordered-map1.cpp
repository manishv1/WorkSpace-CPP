#include <iostream>
#include <unordered_map>
#include <algorithm>
 

 using namespace std;

 
 void print(unordered_map<char , int> a)
 {
    for(auto it = a.begin() ; it != a.end(); ++it)
    {
        std::cout << it->first<<"..." << it->second << std::endl;
    }
      
 }

int main()
{
    std::unordered_map<char, int> m;
 
    std::string s("abcba");

    //find frequency of each character 

    for(int i = 0; i < s.size(); ++i)    
    {
        m[s[i]]++;
        
    }

    print(m);    
    return 0;
}