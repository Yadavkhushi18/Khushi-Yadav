class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> prefixes;
        for(int val : arr1){
            while(!prefixes.count(val) && val){
                prefixes.insert(val);
                val /= 10;
            }
        }
        int longestPrefix = 0;
        for(int val : arr2){
            while(!prefixes.count(val) && val){
                val /= 10;
            }
            if(val){
                longestPrefix = max(longestPrefix, static_cast<int>(log10(val)+1));
            }
        }
        return longestPrefix;
    }
};