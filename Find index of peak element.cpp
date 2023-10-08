// Famous Binary search problem 
// Time complexity for this approach is O(logn)
int findPeakElementindex(vector<int>& num) {
        int n=num.size();
        if(n==1)return 0;
        if(num[0]>num[1])return 0;
        if(num[n-1]>num[n-2])return n-1;
        int low=1;
        int high=n-2;
        while(low<=high){
            int mid=(low+high)/2;
            if(num[mid]>num[mid-1] && num[mid]>num[mid+1]){
                return mid;
            }
            else if(num[mid]>num[mid-1]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
}
