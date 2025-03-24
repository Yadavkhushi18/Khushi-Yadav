class Solution {
    public int countDays(int days, int[][] meetings) {
        int freeDays = 0, lastDay = 0;
        Arrays.sort(meetings,Comparator.comparingInt(a->a[0]));
        for(int[] meeting : meetings){
            int first = meeting[0], last = meeting[1];
            if(first>lastDay+1) freeDays += first-lastDay-1;
            lastDay = Math.max(last,lastDay);
        }
        freeDays += days-lastDay;
        return freeDays;
    }
}