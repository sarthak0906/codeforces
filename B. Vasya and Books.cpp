#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n;
	stack <int> s;
	vector <int> vec;
	cin >> n;
	int * arr = new int [n];
	for (int i=0;i<n;++i) cin >> arr[i];
	for (int i=n-1;i<=0;i--){
		s.push(arr[i]);
	}
//	int * arr = new int [n];
	for (int i=0;i<n;++i){
		int b;
		cin >> b;
		if (vec.begin() == vec.end()){
			int c = 0;
			int a = s.top();
			vec.push_back(s.top());
			while (a != b){
				s.pop();
				a = s.top();
				vec.push_back(s.top());
			}
			cout << c << " ";
		}
		if (binary_search(vec.begin(),vec.end(),b)) cout << 0 << " ";
		else {
			int c = 0;
			int a = s.top();
			vec.push_back(s.top());
			while (a != b){
				s.pop();
				a = s.top();
				vec.push_back(s.top());
			}
			cout << c << " ";
//			arr[i] = c;
		}
	}
	for (int i=0;i<n;++i) cout << arr[i] << " ";
	return 0;
}
