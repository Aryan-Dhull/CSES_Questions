#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n;
    cin>>n;
    vector<pair<int,int>> shows(n);
    for(ll i=0;i<n;i++)cin>>shows[i].second>>shows[i].first;

    ll movies=1;
    sort(shows.begin(),shows.end());

    ll curr=shows[0].first;

    for(ll i=1;i<n;i++){
        // cout<<shows[i].first<<" "<<shows[i].second<<endl;
        if(shows[i].second>=curr){
            // cout<<"true"<<endl;
            curr=shows[i].first;
            movies++;
        }
    }

    cout<<movies<<endl;

    return 0;
}