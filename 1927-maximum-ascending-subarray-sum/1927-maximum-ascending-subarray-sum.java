class Solution {
    public int maxAscendingSum(int[] nums) {
        int maxS = nums[0];
        int currS = nums[0];
        for(int i = 1; i<nums.length; i++){
            if(nums[i]<=nums[i-1]){
                maxS = Math.max(maxS,currS);
                currS = 0;
            }
            currS += nums[i];
        }
        maxS = Math.max(maxS,currS);
        return maxS;
    }
}