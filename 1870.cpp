class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int n=dist.size();
        int l=1;
        int e=*max_element(dist.begin(),dist.end())
        while(l<e){
            int mid=l+(e-l)/2;
            double timetake=0;
            for(int i=0;i<n-1;i++){
                timetake+=int(dist[i]/mid);
            }
            timetake+=double(dist[n-1]/mid);
            if(timetake>hour) l=mid+1;
            else e=mid;
        }
        return e;
    }
};