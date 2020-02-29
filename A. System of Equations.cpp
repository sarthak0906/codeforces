#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n,m;
	cin >> n>> m;
	int count = 0;
	for (int a = 0; a * a <= n && a <= m; ++a){
        int b = n - a * a;
        if (a + b * b == m){
            count  += 1;
        }
    }

	cout << count ;
	return 0;
}

