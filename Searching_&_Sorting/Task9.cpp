// There are n sticks with some lengths. 
// Your task is to modify the sticks so that each stick has the same length.
// You can either lengthen and shorten each stick. 
// Both operations cost x where x is the difference between the new and original length.
// What is the minimum total cost?


#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)cin>>a[i];

    ll ans=0;
    sort(a.begin(),a.end());

    ll medianidx=n/2;
    ll median;
    if(n%2==0)median=(a[medianidx-1]+a[medianidx])/2;
    else median=a[medianidx];

    for(ll i=0;i<n;i++){
        ans+=abs(a[i]-median);
    }

    cout<<ans<<endl;
}