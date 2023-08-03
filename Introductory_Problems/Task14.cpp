#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n,int start,int final,int helper,vector<pair<int,int>> &moves){
    if(n==1){
        moves.push_back({start,final});
        return;
    }
    towerOfHanoi(n-1,start,helper,final,moves);
    moves.push_back({start,final});
    towerOfHanoi(n-1,helper,final,start,moves);
}

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> moves;
    towerOfHanoi(n,1,3,2,moves);
    cout<<moves.size()<<endl;
    for(auto it: moves){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}