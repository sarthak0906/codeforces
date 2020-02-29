#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	string str;
	cin >> str;
	char * ptr = &str[0];
	int p = str.size();
	set <char> st;
	for (int i=0;i<p;++i) st.insert(str[i]);
//	st.insert(str,str+p);
	int n = st.size();
	if (n%2) cout << "IGNORE HIM!";
	else cout << "CHAT WITH HER!";
	return 0;
}

