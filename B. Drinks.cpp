#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	float n;
	cin >> n;
	double sum = 0;
	for (int i=0;i<n;++i){
		int a;
		cin >> a;
		sum += a;
	}
//	cout << sum << endl;
	double res = double (sum)/double (n);
	printf("%lf",res);
	return 0;
}

