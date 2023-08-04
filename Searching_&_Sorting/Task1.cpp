#include<bits/stdc++.h>
using namespace std;

int main(){
    // unordered_set<long long> st;

    // long long n;
    // cin>>n;

    // for(int i=0;i<n;i++){
    //     long long x;
    //     cin>>x;
    //     st.insert(x);
    // }

    // cout<<st.size();
    // return 0;

	long long N;
	cin >> N;
	vector<long long> arr(N);
	for (long long i = 0; i < N; i++) cin >> arr[i];
	sort(arr.begin(), arr.end());
	long long ans = 1;
	for (long long i = 1; i < N; i++) {
		ans += (arr[i] != arr[i - 1]);
	}
	cout << ans << endl;
	return 0;
}
