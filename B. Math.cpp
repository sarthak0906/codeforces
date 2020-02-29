#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

//bool prime[1000000];
//for (int i=0;i<1000000;++i) prime[i] = true;
//prime[0] = false;
//prime[1] = false;
//prime[2] = true;
map<int,int> m;
//
//void seive(int n){
//	for (int i=2;i*i <= n;++i){
//		if (prime[i] == true){
//			for (int j=i*2;j<=n;j += i){
//				prime[j] = false;
//			}
//		}
//	}
//	for (int i=0;i<n;++i){
//		if (prime[i] == true) m.insert(i,0);
//	}
//	for (auto i:m) cout << i.first << "	" << i.second << endl;
//}

int n;

void solve(){
	cin >> n;
	for (int i=2;i<=n;++i){
		if (n%i == 0)m.insert(pair<int,int>(i,0));
		while (n%i == 0){
			n /= i;
			m[i] += 1;
		}
		if (n == 1) break;
	}
	int ma = 0;
//	int mi = INT_MAX;
	int mul = 1;
	for (auto i:m){
		ma = max(ma,i.second);
//		mi = min(mi,i.second);
		mul *= i.first;
	}
//	cout << "mul = " << mul << " ";
	int j = 0;
	int i = ma;
	while (i){
		i/=2;
		j += 1;
	}
//	cout << "\n j = " << j << "\n ma = " << ma << endl;
	if (1<<(j-1) == ma) cout << j;
	else cout << j +1;
//	i += 1;
	return;	
}

int main(){
	int t=1;
	while(t--) solve();
	return 0;
}

