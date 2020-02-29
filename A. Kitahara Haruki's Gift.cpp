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
		if(a==100) a1++;
		else a2++;
	}

	if (a1 % 2 != 0) cout << "NO" << endl;
    else if (a1 == 0 && a2 % 2 == 1) cout << "NO" << endl;
    else cout << "YES" << endl;
	
	return 0;
}

