// Greedy Subtraction Approach
// TC:O(n × max_digit)
// SC: O(1)

class Solution {
public:
    int minPartitions(string n) {
    int cnt=0;
    while(true){
        bool change=false;
        for(auto &ch:n){
            if(ch!='0'){
                ch--;
                change=true;
            }
        }
        if(change==false){
            break;
        }
                cnt++;
    }
    return cnt;
    }
};
