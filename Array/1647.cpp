#include<bits/stdc++.h>
using namespace std;
 // Minimum Deletions to Make Character Frequencies Unique


bool comp(pair<char,int> a, pair<char,int> b)
{
        return a.second > b.second;
}

// find character frequencies in string
map<char,int>charFrequency(string s)
{
    map<char, int> m;
    for (auto& c : s)
    {
      m[c]++;
    }
    // Sorting the map
    vector<pair<char,int>> v(m.begin(), m.end()) ;
    sort(v.begin(),v.end(),comp);
    for (auto& i : m)
    {
        std::cout << i.first<<":"<< i.second << std::endl;
    }
    cout<<endl<<endl;

    for (auto& i : v )
    {
        cout<< i.first <<"  : " << i.second<<endl;
    }

    for (int i = 1; i < v.size(); ++i)
    {
        if ((v[i-1].second >  v[i].second)  )
            continue;
        else if(v[i].second == v[i-1].second)  
             v[i].second = v[i].second -1;
        else if ((v[i-1].second <  v[i].second) && (v[i-1].second != 0) )
             v[i].second = v[i].second - v[i-1].second -1;
        else if(v[i-1].second == 0 ) 
               v[i].second = 0;
    }

    std::cout << endl << endl;
    for (auto& i : v )
    {
        cout<< i.first <<"  : " << i.second<<endl;
    }

   
    return m; 
}
 
 
int main()
{
    charFrequency("asdfasdf"); 
    return 0;
}