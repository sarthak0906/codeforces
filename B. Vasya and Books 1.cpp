#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for (int i=0;i<n;++i){
		cin >> arr[i];
	}
	stack <int> s;
	for (int i=n-1;i>=0;++i) s.push(arr[i]);
	int * b = new int[n];
	vector <int> vec;
	int * res = new int [n];
	for (int i=0;i<n;++i){
		cin >> b[i];
		if (i==0){
			int count = 1;
			int a = s.top();
			vec.push_back(a);
			while (a != b[i]){
				count += 1;
				s.pop();
				a = s.top();
			}
			res[i] = count;
		}
		else if (binary_search(vec.begin(),vec.end(),b[i])) res[i] = 0;
		else {
			int count = 1;
			int a = s.top();
			vec.push_back(a);
			while (a != b[i]){
				count += 1;
				s.pop();
				a = s.top();
			}
			res[i] = count;
		}
	}
	for (int i=0;i<n;++i) cout << res[i] << " ";
	return 0;
}

