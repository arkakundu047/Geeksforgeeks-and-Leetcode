class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
         int n =nums.size();
        int lsum=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int rsum=sum;
        for(int i=0;i<n;i++){
            rsum-=nums[i];
            if(lsum==rsum){
                return i;
            }
            lsum+=nums[i];
        }
        return -1;
    }
};