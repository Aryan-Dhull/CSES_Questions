#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,k;
    cin>>n>>m>>k;
    vector<long long> a(n);
    vector<long long> b(m);

    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    long long i=0,j=0;
    int ans=0;
    while(i<n && j<m){
        if(abs(a[i]-b[j])<=k){
            ans++;
            i++;
            j++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else{
            j++;
        }
    }
    cout<<ans;
    return 0;
}
