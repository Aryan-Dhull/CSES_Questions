#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,x;
    cin>>n>>x;
    vector<long long> weight(n);
    for(int i=0;i<n;i++)cin>>weight[i];

    sort(weight.begin(),weight.end());

    long long i=0,j=n-1;
    long long ans=0;
    while(i<=j){
        if(weight[i]+weight[j]<=x){
            ans++;
            i++;
            j--;
        }
        else{
            ans++;
            j--;
        }
    }
    cout<<ans;
    return 0;
}