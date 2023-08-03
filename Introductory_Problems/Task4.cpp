#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    vector<long> arr;

    for(int i=0;i<n;i++){
        long t;
        cin>>t;
        arr.push_back(t);
    }

    long long  moves=0;

    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            moves+=arr[i-1]-arr[i];
            arr[i]=arr[i-1];
        }
    }
    cout<<moves;

    return 0;
}
