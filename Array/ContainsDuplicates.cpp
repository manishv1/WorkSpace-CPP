#include<iostream>
#include<vector>
#include<unordered_map>

//

using namespace std;
class Solution{
public:
    bool containDuplicates(vector<int>v) 
    {
        unordered_map<int,int> m;

        for(int i = 0 ; i < v.size(); ++i)
        {
              m[v[i]]++;
        }

        for( auto it = m.begin(); it != m.end(); ++it){

            if( it->second > 1)
            return true;
        }

         
        return false;       
    }
};

// Testing default values of Map
class Solution1
{
    public:

        void test()
        {

            unordered_map<int , int > m;
            m.emplace(10,10);
            cout<<m[10]<<endl;
        }


};




int main()
{

    Solution1 s;
    s.test();


   
    return 1;
}

