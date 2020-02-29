#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int mod( int a){
	if (a < 0) return a*-1;
	else return a;
}

int main(){
	int n;
	cin >> n;
	int * arr = new int [n];
	for (int i=0;i<n;++i){
		cin >> arr[i];
	}
	int  a , b, min;
	min = mod(arr[n-1] - arr[0]);
	a = n-1;
	b = 0;
	for (int i=0;i<n-1;++i){
		if (mod(arr[i]-arr[i+1]) < min){
			a = i;
			b = i+1;
			min = mod(arr[i]-arr[i+1]);
		}
	}
	cout << a+1 << " "<< b+1;
	return 0;
}

