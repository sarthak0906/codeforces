#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n;
	cin >> n;
	int sum = 0;
	for (int i=0;i<n;++i){
		int a;
		cin >> a;
		sum += a;
	}
	int count = 0;
	if ((sum + 1)%(n+1) != 1) count++;
	if ((sum + 2)%(n+1) != 1) count++;
	if ((sum + 3)%(n+1) != 1) count++;
	if ((sum + 4)%(n+1) != 1) count++;
	if ((sum + 5)%(n+1) != 1) count++;
	cout << count << endl;
	return 0;
}

