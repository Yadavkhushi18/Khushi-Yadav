class Solution {
public:
    int numerical(char roman) {
        if (roman == 'I')
            return 1;

        else if (roman == 'V')
            return 5;
        else if (roman == 'X')
            return 10;
        else if (roman == 'L')
            return 50;
        else if (roman == 'C')
            return 100;
        else if (roman == 'D')
            return 500;
        return 1000;
    }
    int romanToInt(string s) {
        int n = s.length();
        if (n == 1)
            return numerical(s[0]);
        int integerNum = 0;
        for(int i=0;i<n-1;i++){
            if(numerical(s[i])<numerical(s[i+1])){
                integerNum-= numerical(s[i]);
                }
                else integerNum +=numerical(s[i]);
        }
        integerNum += numerical(s[n-1]);
        return integerNum;
    }
};