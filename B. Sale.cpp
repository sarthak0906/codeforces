#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n,k;
	cin >> n >> k;
	int * arr = new int [n];
	for (int i=0;i<n;++i) cin >> arr[i];
	sort(arr,arr+n);
	int res = 0;
	for (int i=n-1;i>0&&k;i--){
		if (arr[i] < 0){
			k-=1;
			res += (-1*arr[i]);
			cout << res;
		}
	}
	cout << res ;
//	priority_queue <int> pq;
//	priority_queue <int,vector<int>,greater<int> > p;
//	while (n--){
//		int a;
//		cin >> a;
//		if (a <= 0) pq.push(a);
//	}
//	ll res = 0;
//	while (k-- && !pq.empty()){
//		res -= pq.top();
//		cout << res << endl;
//		pq.pop();
//	}
	cout << res;
	return 0;
}
