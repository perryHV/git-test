class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int sum=0;
        map<int,int>mp;
        for(int x:skill) {
            sum+=x;
            mp[x]++;
        }
        int n=skill.size();
        int count=0,chem=0;
        int ski=sum/(n/2);
        if(sum%(n/2)) return -1;
        for(int it:skill) {
            int second=ski-it;
            if(second>=0){
                if(second==it){
                    if(mp[second]>=2){
                       mp[second]=mp[second]-2;
                    chem+=(second*it);
                    count++;
                    if(!mp[second]) mp.erase(second);
                    }
                    
                }
                else{
                    if(mp.find(second)!=mp.end()){
                      mp[it]--;
                      mp[second]--;
                      count++;
                      chem+=(second*it);
                      if(!mp[second]) mp.erase(second);
                      if(!mp[it]) mp.erase(it);
                    }
                }
            }
        }
        if(count==(n/2)) return chem;
        return -1;

    }
};


