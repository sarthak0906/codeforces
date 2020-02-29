#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int k,l,m,n,d;
	cin >> k;
	cin >> l;
	cin >> m;
	cin >> n;
	cin >> d;
	int * arr = new int[d+1];
//	memset(arr,0,sizeof(arr));
	for (int i=0;i<=d;++i){
		arr[i] = 0;
//		cout << arr[i] << "  ";
//		if (arr[i] == 1) count++;
	}
	for (int i=k;i<=d;i+=k){
		arr[i] = 1;
	}
	for (int i=l;i<=d;i+=l){
		arr[i] = 1;
	}
	for (int i=m;i<=d;i+=m){
		arr[i] = 1;
	}
	for (int i=n;i<=d;i+=n){
		arr[i] = 1;
	}
	int count = 0;
	for (int i=0;i<=d;++i){
//		cout << arr[i] << "  ";
		if (arr[i] == 1) count++;
	}
	cout << count;
	return 0;
}
