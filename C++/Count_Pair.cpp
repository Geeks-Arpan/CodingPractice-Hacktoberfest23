#include<bits/stdc++.h>
using namespace std;
int pairWithGivenSum(int *arr,int n,int k){
    unordered_map<int,int>mpp;
    int cnt = 0;
    for(int i=0;i<n;i++){
        int ans = k - arr[i];
        if(mpp[ans]){
            cnt+=mpp[ans];
        }
        mpp[arr[i]]++;
    }
    return cnt;
}
int main(){
    int arr[] = {1,1,1,1};
    int k;
    cin>>k;
    int ans = pairWithGivenSum(arr,4,k);
    cout<<ans;
    return 0;
}
