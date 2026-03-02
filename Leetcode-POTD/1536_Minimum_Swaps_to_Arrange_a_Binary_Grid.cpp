// Approach: Greedy Algorithm
// TC : O(n²)
// SC : O(n)

class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>zero_end(n,0);
        for(int i=0;i<n;i++){
            int j=n-1;
            int cnt=0;
            while(j>=0 && grid[i][j]==0){
                cnt++;
                j--;
            }
            zero_end[i]=cnt;
        }

        int step=0;
        for(int i=0;i<n;i++){
            int need=n-i-1;
            int j=i;
            while(j<n && zero_end[j]<need){
                j++;
            }
            if(j==n){
                return -1;
            }

            while(j>i){
                swap(zero_end[j],zero_end[j-1]);
                step++;
                j--;
            }
        }
        return step;
    }
};
