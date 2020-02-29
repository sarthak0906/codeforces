#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int n;
	cin >> n;
	for (int i=0;i<2*n + 1;++i){
		int count = 0;
		for (int j=0;j<2*n +1;++j){
			if (i <= n || j <= n){
				if (i+j >= n && abs(i-j) <n){
					if (j < n){
						cout << count << " ";
						count ++;
					}
					else{
						cout << count  << " ";
						count --;
					}
				}
				else if (count == 0) cout << count-1 << endl;
				else cout << "  ";
			}
			else{ 
				if (i+j < 3*n ){
					if (j < n){
						cout << count << " ";
						count ++;
					}
					else{
						cout << count  << " ";
						count --;
					}
				}
				else if (count == 0) cout << count-1 << endl;
				else cout << "  ";
			}
		}
//		cout << endl;
	}
	return 0;
}
