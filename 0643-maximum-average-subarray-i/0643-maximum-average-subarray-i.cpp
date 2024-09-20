class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0, start = 0;
        double ans = DBL_MIN;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            sum += nums[i];
            if(i >= k-1){
                double avg = (double)sum/k;
                if(ans == DBL_MIN) ans = avg;
                ans = max(ans,avg);
                sum -= nums[start];
                start++;
            }
        }
        return ans;
    }
};