#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int currsum[n+1];
    currsum[0]=1;
    for(int i=1;i<=n;i++){
        currsum[i]=currsum[i-1]+arr[i-1];
    }

    int maxSum=INT_MIN;
    for(int)
}