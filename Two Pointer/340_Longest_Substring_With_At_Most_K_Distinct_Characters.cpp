class Solution {
  public:
    int totalElements(vector<int> &arr int k) {
        // code here
        int maxi=0;
        int l=0,r=0;
        unordered_map<int,int>mpp;
        while(r<arr.size()){
            mpp[arr[r]]++;
            r++;
            while(mpp.size()>2){
                mpp[arr[l]]--;
                if(mpp[arr[l]]==0){
                    mpp.erase(arr[l]);
                }
                    l++;
            }
            if(mpp.size()<=2){
                maxi=max(maxi,r-l);
            }
        }
        return maxi;
    }
};
