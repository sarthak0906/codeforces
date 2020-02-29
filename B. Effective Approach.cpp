#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n;
	cin >> n;
	int * arr = new int [n];
	for (int i=0;i<n;++i){
		int a;
		cin >> a;
		arr[a-1] = i+1;
	}
	int m;
	cin >> m;
	int * a = new int [m];
	for (int i=0;i<m;++i) cin >> a[i];
	long long int count = 0;
	long long int count1 = 0;
	for (int i=0;i<m;++i){
		count += arr[a[i]-1];
		count1 += n+1-arr[a[i]-1];
	}
	cout << count << " " << count1 ;
	return 0;
}

