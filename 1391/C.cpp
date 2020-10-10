#include<bits/stdc++.h>

long long int MOD = 1e9 + 7;

using namespace std;

int main(){
    int n;
    cin >> n;
    long long int res=1, fact=1;

    for (int i=1;i<n;++i){
        res *= 2;
        fact *= i;
        res %= MOD;
        fact %= MOD;
    }
    fact *= n;
    fact %= MOD;
    fact -= res;
	fact %= MOD;
	if(fact < 0)fact += MOD;
	cout << fact;
    return 0;
}