#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// Leet Code Proble : 1. Two Sum
// Solved using Brute Force l
// Learned using vector as array 
class Solution {
public:
vector<int> twoSum(vector<int>&v, int t) 
    {
        vector<int> out;
        for(int i = 0 ; i < v.size(); ++i){

            for( int j = i+1; j < v.size(); ++j){

                if(v[i]+v[j] == t)
                {
                    out.push_back(i);
                    out.push_back(j);
                }

            }
        }

        return out;
       
    }
};



class Solution1 {
public:
vector<int> twoSum(vector<int>&v1, int target) 
{
        vector<int> out;
        vector<int> v = v1;

        std::sort(v.begin(),v.end());
        int left = 0;
        int right = v.size()-1;
        cout<<"left..."<<left<<"   right.."<<right<<endl;
        while( left < right)
        {
            if( v[left] + v[right] == target)
            {
                 auto it = find(v1.begin(),v1.end(),v[left]);
                 auto it1 = find(v1.begin(),v1.end(),v[right]);
                 cout<<"it values"<<*it<<".."<<*it1<<endl;
                 out.push_back(distance(v1.begin(),it));
                 out.push_back(distance(v1.begin(), it1));  
                 return out; 
            }
           else if( v[left]+ v[right] > target)
            {
                right--;

            }
            else if( v[left] + v[right] < target)
            {
                left++;

            }

        }
        return out;
       
    }
};






int main()
{

    Solution1 s;
    int t= 8;
    vector<int> v= { 3,3};
    vector<int> out;
    for(auto x : v)
    {
        cout<<x<<endl;
    }
    out = s.twoSum(v,t);
    for(auto x : out)
    {
        cout<<x<<endl;
    }
    
    return 1;
}

