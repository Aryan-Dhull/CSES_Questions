#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int l=s.size();
    int maxlen=1;
    int len=0;
    char c;
    for(int i=0;i<l;i++){
        if(len==0){
            c=s[i];
            len++;
        }
        else if(s[i]==c)len++;
        else{
            len=1;
            c=s[i];
        }

        maxlen=max(maxlen,len);
    }

    cout<<maxlen;
    return 0;
}