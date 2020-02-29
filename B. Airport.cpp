#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n,m;
	cin >> n >> m;
//	vector <int> vec;
	priority_queue<int> pq;
	priority_queue<int,vector <int>,greater <int> > minpq;
	for (int i=0;i<m;++i){
		int a;
		cin >> a;
		pq.push(a);
		minpq.push(a);
	}
	int min = 0;
	int max = 0;
	int o = n;
	for (int i=0;i < n; ++i){
		int a = pq.top();
		pq.pop();
		max += a;
		a--;
		pq.push(a);
	}
	while (n--){
		int a = minpq.top();
		minpq.pop();
		min += a;
		// cout << "a => " << a << endl;
		// cout << "min => " << min << endl;
		a--;
		if (a > 0){
			minpq.push(a);
		}
	}
	cout << max << " " << min;
	return 0;
}