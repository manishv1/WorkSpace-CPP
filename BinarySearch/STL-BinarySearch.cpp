#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;

class Solution
{

public:

    bool search(vector<int> v, int t)
    {
        sort(v.begin(), v.end());
        return binary_search(v.begin(), v.end(),t);
    }


int main(){

    vector<int> v = {2,5,6,7,3,1,0};
    Solution s;
    cout<<"Target number is present :"<<s.search(v,5);
   
    return1;
}