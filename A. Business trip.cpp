#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int k;
	cin >> k;
	if (k==0){
		for (int i=0;i<12;++i) cin >> k;
		cout << 0;
	} 
	else {
		priority_queue<int> p;
		for (int i=0;i<12;++i){
			int a;
			cin >> a;
			p.push(a);
		}
//		while (p.size()){
//			cout << p.top();
//			p.pop();
//		}
		int res = 0;
		int i = 0;
		while (res < k&&p.size()){
			res += p.top();
			i += 1;
			p.pop();
//			res += p.top();
		}
		if(res < k) cout << "-1";
		else cout << i;
	}
	return 0;
}

