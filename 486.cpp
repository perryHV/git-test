class Solution {
public:
int alice,bob;
    bool PredictTheWinner(vector<int>& nums) {
        alice=0,bob=0;
        int n=nums.size();
        return solver(nums,n,1,0,n-1);

    }
    int solver(vector<int>& nums,int n,int turn,int st,int end){
        if(st>end) return 0;
        if(turn){
            al
        }
    }
};
Input: nums = [1,5,233,7]
Output: true
Explanation: Player 1 first chooses 1. Then player 2 has to choose between 5 and 7. No matter which number player 2 choose, player 1 can choose 233.
Finally, player 1 has more score (234) than player 2 (12), so you need to return True representing player1 can win.