#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int s1,s2,s3,s4;
	cin >> s1 >> s2 >> s3 >> s4;
	int count = 0;
	if (s1 == s2) count ++;
	if (s1 == s3 || s2 == s3) count ++;
	if (s1 == s4 || s2 == s4 || s3 == s4) count ++;
	cout << count ;
	return 0;
}

