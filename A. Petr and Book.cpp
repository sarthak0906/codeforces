#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n;
	cin >> n;
	int arr[7];
	for (int i=0;i<7;++i){
		cin >> arr[i];
	}
	int i;
	for (i=0;n>0;++i){
		n -= arr[i%7];
	}
	if (i%7) i = i%7;
	else i = 7;
	cout << i;
	return 0;
}

