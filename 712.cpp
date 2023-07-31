logic-1:

class Solution {
public:
    int dp[1001][1001];
    int minimumDeleteSum(string s1, string s2) {
        int n=s1.size(),m=s2.size();
        memset(dp,-1,sizeof(dp));
        return solver(s1,s2,0,0,n,m);
    }
    int solver(string a, string b,int i,int j, int n,int m){
        if(i==n ) {
            int temp=0;
            for(int k=j;k<m;k++) temp+=(int)b[k];
            return temp;
        }
          if(j==m ) {
            int temp=0;
            for(int k=i;k<n;k++) temp+=(int)a[k];
            return temp;
        }
        if(i==n&&j==m) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int ans=0;
        if(a[i]==b[j]) ans+= solver(a,b,i+1,j+1,n,m);
        else{
            ans+=min((int)a[i]+solver(a,b,i+1,j,n,m),(int)b[j]+solver(a,b,i,j+1,n,m));
        }
        return dp[i][j]=ans;
    }
};

logic 2:
class Solution {
public:
    int dp[1001][1001];
    int minimumDeleteSum(string s1, string s2) {
        int n=s1.size(),m=s2.size();
        int sum1=0,sum2=0;
		for(auto i:s1) sum1+=i;
		for(auto i:s2) sum2+=i;
        memset(dp,-1,sizeof(dp));
        return (sum1 +sum2- 2*solver(s1,s2,0,0,n,m));
    }
    int solver(string& a, string& b,int i,int j, int n,int m){
        if(i>=n||j>=m) return 0;
        
     
        if(dp[i][j]!=-1) return dp[i][j];
        int ans=0;
        if(a[i]==b[j]) ans+= ((int)a[i]+solver(a,b,i+1,j+1,n,m));
        else{
            ans+=max(solver(a,b,i+1,j,n,m),solver(a,b,i,j+1,n,m));
        }
        return dp[i][j]=ans;
    }
};



Input: s1 = "sea", s2 = "eat"
Output: 231
Explanation: Deleting "s" from "sea" adds the ASCII value of "s" (115) to the sum.
Deleting "t" from "eat" adds 116 to the sum.
At the end, both strings are equal, and 115 + 116 = 231 is the minimum sum possible to achieve this.
