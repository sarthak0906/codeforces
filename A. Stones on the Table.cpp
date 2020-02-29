#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	string str;
	int n;
	cin >> n;
	cin >> str;
	
	char * ptr = &str[0];
	int count = 0;
	for (int i=0;i<strlen(ptr)-1;++i){
		if (str[i] == str[i+1]) count ++;
	}
	cout << count << endl;
	return 0;
}

