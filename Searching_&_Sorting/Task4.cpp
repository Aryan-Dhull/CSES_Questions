#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m;
    cin>>n>>m;
    // vector<long long> a(n);
    // vector<long long> b(m);
    // for (auto &x:a)cin >> x ;
    // for (auto &x:b)cin >> x ;
    // sort(a.begin(),a.end());

    // for(long long i=0;i<m;i++){
    //     auto it=upper_bound(a.begin(),a.end(),b[i]);
    //     if(it==a.begin()){
    //         cout<<-1<<endl;
    //     }
    //     else{
    //         cout<<*(--it)<<endl;
    //         a.erase(it);
    //     }
    // }

    multiset<long long,greater<int>> tickets;

    for (long long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        tickets.insert(x);
    }

    while(m--){
        long long x;
        cin>>x;
        auto it=tickets.lower_bound(x);
        if(it==tickets.end()){
            cout<<-1<<endl;
        }
        else{
            cout<<*it<<endl;
            tickets.erase(it);
        }
    }

    return 0;
}