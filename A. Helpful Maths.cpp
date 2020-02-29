#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	string str;
	cin >> str;
	char * ptr = &str[0];
	int n = strlen(ptr);
	int a = 0;
	int b = 0;
	int c = 0;
	for (int i=0;i<n;++i){
		if (str[i] == '3') c++;
		else if (str[i] == 	'2')b++;
		else if (str[i] == 	'1')a++;
	}
//	printf("%d %d %d",a,b,c);
	n = n/2;
	n += 1;
	for (int i=0;i<n;++i){
		if(i) cout << '+';
		if(a){
			cout << '1';
			a -= 1;
		}
		else if (b){
			cout << '2';
			b -= 1;
		}
		else if (c){
			cout << '3';
			c -= 1;
		}
	}
	return 0;
}

