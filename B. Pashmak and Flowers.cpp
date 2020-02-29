#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n;
	cin >> n;
	vector <int> vec;
	while (n--){
		int a;
		cin >> a;
		vec.push_back(a);
	}
	sort(vec.begin(),vec.end());
	int a=1;
	int b=1;
	int i=1;
	while (vec[i] == vec[0]){
		a+=1;
		i+=1;
	}
	i = vec.size()-2;
	while (vec[vec.size()-1] == vec[i]){
		b += 1;
		i -= 1;
	}
	cout << vec[vec.size()-1] - vec[0] << " " << a*b;
	return 0;
}

