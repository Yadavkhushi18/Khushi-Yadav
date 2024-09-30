class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight) {
        int n = maximumHeight.size();
        sort(maximumHeight.begin(),maximumHeight.end());
        long long ans = 0;
        long long height = maximumHeight[n-1];
        for(int i = n-1; i>=0; i--){
            height = min(height,(long long)maximumHeight[i]);
            if(height<=0) return -1;
            ans += height;
            height--;
        }
        return ans;
    }
};