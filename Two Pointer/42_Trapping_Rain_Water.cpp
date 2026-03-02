// Approach: Two Pointer 
// TC: O(n)
// SC : O(1)
class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
        if(n<=2) return 0;

        vector<int>left(n,0);
        vector<int>right(n,0);
        
        left[0]=arr[0];
        right[n-1]=arr[n-1];
        for(int i=1;i<n;i++){
            left[i]=max(arr[i],left[i-1]);
        }
        
    
        for(int i=n-2;i>=0;i--){
            right[i]=max(right[i+1],arr[i]);
        }
        
        
        int total=0;
        
        for(int i=0;i<n;i++){
            total += min(right[i], left[i]) - arr[i];

        }
        return total;
    }
};
