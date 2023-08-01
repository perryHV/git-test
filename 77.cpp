class Solution {
public:
vector<vector<int>> ans;
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        for(int i=1;i<=n-k;i++){
            solver(i,n,k,temp);
        }
    }
    void solver(int st,int n,int k,vector<int>&temp){
        if(temp.size()==k){
            ans.push_back(temp);
            return ;
        }
        if(st>n) return ;
        for(int i=st;i<n;i++){
            temp.push_back(i);
            solver(i+1,n,k,temp);
            temp.pop_back();
        }
    }
};


Input: n = 4, k = 2
Output: [[1,2],[1,3],[1,4],[2,3],[2,4],[3,4]]
Explanation: There are 4 choose 2 = 6 total combinations.
Note that combinations are unordered, i.e., [1,2] and [2,1] are considered to be the same combination.
