#include<bits/stdc++.h>
using namespace std;

int main(){
    long t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        long long ans=0;
        
        long long maxi=max(x,y);
        long long mini=min(x,y);

        bool upbig=false;
        if(maxi%2!=0)upbig=true;

        long long cen=(maxi*maxi)-maxi+1;
        long long diff=maxi-mini;

        if(maxi==x){
            if(upbig)ans=cen-diff;
            else ans=cen+diff;
        }
        else{
            if(upbig)ans=cen+diff;
            else ans=cen-diff;
        }

        cout<<ans<<endl;;
    }
    return 0;
}
