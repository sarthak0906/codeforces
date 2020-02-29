#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n , m;
	cin >> n >> m;
	int * arr = new int [m];
	int count = -1;
	for (int i=0;i<m;++i){
		cin >> arr[i];
	}
	for (int i=0;i<m-1;++i){
		if (arr[i+1] < arr[i]) count += n;
	}
	cout << count + arr[m-1];
	return 0;
}

