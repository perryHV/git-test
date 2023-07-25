class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int i=0,j=n;
        while(i<j){
            int mid=i+(j-i)/2;
            if(arr[mid]>arr[mid-1]) {
                i=mid;
            }
            else j=mid-1
        }//tere bhai ki bhosdi
        return i;
    }
};
// made commit for reset and check
