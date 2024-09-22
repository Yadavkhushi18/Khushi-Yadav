class Solution {
    int solve(int n, long prefix1, long prefix2){
        int nums = 0;
        while(prefix1<=n){
            nums += min((long)(n+1),prefix2)-prefix1;
            prefix1 *= 10;
            prefix2 *= 10;
        }
        return nums;
    }
public:
    int findKthNumber(int n, int k) {
        int curr = 1;
        k--;
        while(k){
            int nums = solve(n,curr,curr+1);
            if(nums<=k){
                curr++;
                k -= nums;
            }else{
                curr *= 10;
                k--;
            }
        }
        return curr;
    }
};