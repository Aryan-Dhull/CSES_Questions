#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long sum=0;
    for(long long i=1;i<=n;i++)sum+=i;

    if(sum%2!=0)cout<<"NO"<<endl;
    
    else{
        long long target=sum/2;
        vector<long long> v1,v2;
        for(long long i=n;i>=1;i--){
            if(target-i>=0){
                v1.push_back(i);
                target-=i;
            }
            else v2.push_back(i);
        }

        cout<<"YES"<<endl;
        cout<<v1.size()<<endl;
        for(auto i:v1)cout<<i<<" ";
        cout<<endl;
        cout<<v2.size()<<endl;
        for(auto i:v2)cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
