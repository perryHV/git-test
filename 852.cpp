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
// subtract.js
// return subtraction of two numbers
function subtract(a, b, bMINUSa) {
    if (bMINUSa === true) {
        return b - a;
    }
    else {
        return a - b;
    }
};
// made commit for reset and check