TC: O(N)
SC: O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxm=nums[0];
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>maxm) maxm=sum;
            if(sum<0) sum=0;
        }
        return maxm;
    }
};
