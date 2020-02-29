#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n;
	cin >> n;
	int sum=0;
	int a1=0;
	int a2=0;
	for (int i=0;i<n;++i){
		int a;
		cin >> a;
		sum+=a;
		if(a%2) a1++;
		else a2++;
	}
	if (sum%400 == 0) cout << "YES";
	else {
		if (sum%200 != 0) cout << "NO";
		else if (a2 % 2 == 0) cout << "YES";
		else cout << "NO";
	}
	return 0;
}

