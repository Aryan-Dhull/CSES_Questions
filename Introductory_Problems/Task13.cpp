#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;

    for(int i=0;i<(1<<n);i++){
        int val = i^(i>>1);
        string s="";
        for(int j=0;j<n;j++){
            if(val&(1<<j))s+='1';
            else s+='0';
        }
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }

    return 0;
}