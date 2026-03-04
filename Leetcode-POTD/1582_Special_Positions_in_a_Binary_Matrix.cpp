class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int cnt=0;
        int r=mat.size();
        int c=mat[0].size();
        vector<int>row(r,0);
        vector<int>col(c,0);
        

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mat[i][j]==1){
                    row[i]++;
                    col[j]++;
                }
            }
        }

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mat[i][j]==1){
                    if(row[i]==1 && col[j]==1){
                        cnt++;
                    }
                }
            }
        }



        return cnt;
    }
};

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int cnt=0;
        int r=mat.size();
        int c=mat[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){

                if(mat[i][j]==1){
                    bool special=true;
                    for(int k=0;k<c;k++){
                        if(k!=j && mat[i][k]==1){
                            special=false;
                        }
                    }
                    for(int l=0;l<r;l++){
                        if(l!=i && mat[l][j]==1){
                            special=false;
                        }
                    }
                    if(special==true){
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};
