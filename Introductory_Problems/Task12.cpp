#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length();
    int cnt[26]={0};
    for(int i=0;i<n;i++){
        cnt[s[i]-'A']++;
    }

    int odd=0;
    for(int i=0;i<26;i++){
        if(cnt[i]&1)odd++;
    }

    if(odd>1){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }

    string ans="";

    for(int i=0;i<26;i++){
        if(cnt[i]&1^1){
            for(int j=0;j<cnt[i]/2;j++){
                ans+=char(i+'A');
            }
        }
    }

    for(int i=0;i<26;i++){
        if(cnt[i]&1){
            for(int j=0;j<cnt[i];j++){
                ans+=char(i+'A');
            }
        }
    }

    for(int i=25;i>=0;i--){
        if(cnt[i]&1^1){
            for(int j=0;j<cnt[i]/2;j++){
                ans+=char(i+'A');
            }
        }
    }

    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;


    return 0;
}
