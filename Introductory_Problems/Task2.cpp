#include<bits/stdc++.h>
using namespace std;

int main(){
    long n;
    cin>>n;
    int arr[n+1]={0};
    int a[n];

    for(int i=0;i<n-1;i++){
        cin>>a[i];
        arr[a[i]]=1;
    }

    for(int i=1;i<=n;i++){
        if(arr[i]==0){
            cout<<i;
            break;
        }
    }

    return 0;
}