#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &arr, int n)
{
      int s1=-1 ;
        for(int i=n-2 ; i>=0 ; i--)
        {
            if(arr[i]<arr[i+1])
            {
                for(int j=n-1 ; j>=0 ; j--)
                {
                    if(arr[j]>arr[i])
                    {
                        swap(arr[i],arr[j]) ;
                        reverse(arr.begin()+i+1, arr.end()) ;
                        return arr ;
                    }
                }
            }
        }
        
        reverse(arr.begin(),arr.end()) ;
        return arr ;

        
} 
