#include<bits/stdc++.h>

using namespace std;

int main(){
	string str;
	cin >> str;
//	tolower(str);
//	vector <int> vec;
//	cout << str << endl;
	for (int i=0;i<str.length();++i){
		if (str[i] >= 'A' && str[i] <= 'Z'){
			str[i] += 'a' - 'A';
		}
		if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'y'){
			cout << "." << str[i] ;
		}
	}
}
