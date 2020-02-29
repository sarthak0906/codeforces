#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n;
	cin >> n;
	vector <pair<int,int> > vec;
	ll sum = 0;
	for (int i=0;i<n;++i){
		int a;
		cin >> a;
		sum += a;
		vec.push_back(make_pair(a,i+1));
	}
	sort(vec.begin(),vec.end());
	vector <int> ans;
	for (int i=0;i<n;++i){
		if (i == n-1) {
			if (sum - vec[i].first - vec[i-1].first == vec[i-1].first) ans.push_back(vec[i].second);
		}
		else {
			if (sum - vec[i].first - vec[n-1].first == vec[n-1].first) ans.push_back(vec[i].second);
		}
	}
	cout << ans.size() << endl;
	for (auto i:ans) cout << i << " ";
	return 0;
}

