class Solution {
public:
    int dp[10002][10002];
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]) dp[i][j]=INT_MAX;
                else dp[i][j]=0;
            }
            for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]) dp[i][j]= solve(i,j,m,n);
            }

        }
        return dp;
    }
    int solve(int i,int j, int m,int n){
        if(i<0||i>=m||j<0||j>=n) return INT_MAX;
        if(dp[i][j]!=INT_MAX) return dp[i][j];
        int dist=INT_MAX;
        dist=min(dist,1+solve(i+1,j+1,m,n));
        dist=min(dist,1+solve(i+1,j-1,m,n));
        dist=min(dist,1+solve(i-1,j+1,m,n));
        dist=min(dist,1+solve(i-1,j-1,m,n));
        
       return dp[i][j]=dist;
    }
};

// made commit for reset and check