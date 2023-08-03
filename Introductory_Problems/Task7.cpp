#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    for(int i=1;i<=n;i++){
        long long t=i*i;
        long long ans=(t)*(t-1)/2;
        if(i>2)ans-=4*(i-1)*(i-2);
        cout<<ans<<endl;
    }
    return 0;
}
