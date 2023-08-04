#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)cin>>a[i];

    ll ans=INT_MIN;
    ll sum=0;

    for(ll i=0;i<n;i++){
        sum+=a[i];
        ans=max(ans,sum);
        if(sum<0)sum=0;
    }

    cout<<ans<<endl;
}