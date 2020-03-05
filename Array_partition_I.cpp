//Time Complexity-O(nlogn)
//Space Complexity-O(1)
//Did the code execute on Leetcode? yes

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<nums.size();i+=2)
        {
            sum+=nums[i];
        }
        return sum;
    }
};