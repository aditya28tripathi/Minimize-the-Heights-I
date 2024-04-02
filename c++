class Solution{   
public:
    int getMinDiff(int arr[], int n, int k) {
       
       sort(arr,arr+n);
       
       int mini = INT_MAX;
       int maxi = INT_MIN;
       
       int result = INT_MAX;
       
       for(int i =0;i<n-1;i++){
           
           mini = min(arr[0]+k , arr[i+1]-k);
           maxi = max(arr[i]+k , arr[n-1]-k);
           
           result = min(result,maxi-mini);
           
       }
       
       result = min(result , arr[n-1] - arr[0]);
       
       return result;
    }
};
