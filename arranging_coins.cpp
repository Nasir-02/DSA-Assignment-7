// arrange coins

class Solution {
public:
    int arrangeCoins(int n) {
        int s = 0;
        int e = n;
        long mid = s+(e-s)/2;
        int ans = -1;
        while(s<=e){
            long sum = mid*(mid+1)/2;
            if(sum == n)
                return mid;
           else if(sum > n)
                e = mid-1;
            else{
                ans = mid;
                s = mid+1;
            }

            mid = s+(e-s)/2;
        }
        return ans;
    }
};
