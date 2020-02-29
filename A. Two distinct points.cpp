#include<bits/stdc++.h>
#define loop(i,a,n) for(int i=a;i<n;++i)
#define rloop(i,n,a) for(int i=n;i>=a;i--)
#define vi vector<int>
#define vl vector<long long int>
#define pii pair<int,int>
#define pll pair<long long int,long long int>
#define V vector
#define P pair
#define F first
#define S second
#define IT iterator

using namespace std;

int main(){
	int q;
	cin >> q;
	while (q--){
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		int res1,res2;
		res1 = a;
		if (a == c) res2 = d;
		else res2 = c;
		cout << res1 << " " << res2 << endl;
	}
	return 0;
}

