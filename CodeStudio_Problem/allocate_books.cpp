#include <bits/stdc++.h> 
 bool isPossible(vector<int> arr, int n, int m,int mid){
     int sumS =1;
     int sumP =0;
     
     for(int i=0; i<n; i++){
         if(sumP + arr[i] <= mid ){
             sumP +=arr[i];
             
         }
         else {
             sumS ++;
             if(sumS >m || arr[i]>mid){
                 return false;
             }
               sumP = arr[i];
         }
     }
     return true;
         
 }

int allocateBooks(vector<int> arr, int n, int m) {
  int s=0;
    int sum =0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid =s+(e-s)/2;
    
    while(s<=e){
        if(isPossible(arr, n, m, mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
       mid =s+(e-s)/2;
    }
    return ans;
       
}

