#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    .
    int maxsum = arr[0] ;
    int currsum = arr[0];
    
    for (int i =1; i < n ;i++){
        currsum = max(currsum+arr[i],arr[i]);
        maxsum = max(maxsum,currsum);//add arr[i+1] in arr[i](subarray)
        
        
    }if(maxsum<=0){return 0;} 
    return maxsum;
        // Your code here
        
}
