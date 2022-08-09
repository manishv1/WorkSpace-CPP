#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int idx = 0;
        int pivot = 0;

        for(int i = 0 ; i < nums.size(); ++i){

               if (nums[i] < 0 )
               {
                    if(pivot != idx)
                        swap( nums[pivot], nums[idx]);
                    ++pivot;
               }
               else {

                    ++idx;
               }

        }
        return nums;

    }
};



class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        int positive = 0, negative = 1;
        for (int i = 0; i < n; ++i) {
            if (nums[i] > 0) {
                ans[positive] = nums[i];
                positive += 2;
            } else if (nums[i] < 0) {
                ans[negative] = nums[i];
                negative += 2;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = { -1,-2,1,2,3,-9};
	s.rearrangeArray(nums);
   // cout<<nums<<endl;
	return 0;
}

