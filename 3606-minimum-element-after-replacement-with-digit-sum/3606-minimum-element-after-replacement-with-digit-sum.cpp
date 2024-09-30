class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        for(int i = 0; i<n; i++){
            int num = 0;
            int temp = nums[i];
            while(temp){
                num += temp%10;
                temp /= 10;
            }
            ans = min(ans,num);
        }
        return ans;
    }
};