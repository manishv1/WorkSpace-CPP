#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
 

  int arr[] = { 1, -4, 45, 6, 10, 8 };
 unordered_map< int, int> arr_map;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map <int int >   arr_map;
        int k = 0;
        std::vector<int>::iterator it;


        for( int i = 0 ; i < nums.size(); i++ ){

                k = target - nums[i];
                it = std::find (nums.begin(), nums.end(), k);
                if (it != vec.end())
                {
                    cout<< "No match for "<< nums[i];
                } 
                else {

                    cout<<"Match found for "<< num[i]<<"and match is"<< *it<<endl;
                }
        }
    }
};

int main()
{
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < len ; ++i){

        arr_map[i]++,
    }

    for(auto x : arr_map)
        cout<< x.first << "  "<< x.second<<endl; 
    return 0;
}