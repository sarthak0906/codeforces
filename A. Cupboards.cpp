#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n;
	cin >> n;
	int ro = 0,rc = 0,lo = 0,lc = 0;
	for (int i=0;i<n;++i){
		int a , b;
		cin >> a >> b;
		if (a == 0) ro++;
		else rc ++;
		if (b == 0) lo++;
		else lc++;
	}
	int count = 0;
	if (lo > lc) count += lc;
	else count += lo;
	if (ro > rc) count += rc;
	else count += ro;
	cout << count << endl;
	return 0;
}

