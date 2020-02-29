#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n , m;
	cin >> n >> m;
	vector <int> vec;
	for (int i=0;i<m;++i){
		int a;
		cin >> a;
		vec.push_back(a);
	}
	sort(vec.begin(),vec.end());
	int min = vec[n-1] - vec[0];
	for (int i=0;i<=m-n;++i){
		if (vec[i+n-1]-vec[i] < min) min = vec[i+n-1]-vec[i];
//		cout << min << endl;
	}
	cout << min;
	return 0;
}

