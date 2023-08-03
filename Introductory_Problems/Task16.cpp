#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long> v(n);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    long long ans=INT_MAX;
    for(int i=0;i<(1<<n);i++){
        long long s=0;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                s+=v[j];
            }
        }
        ans=min(ans,abs(sum-2*s));
    }
    cout<<ans<<endl;
    return 0;
}