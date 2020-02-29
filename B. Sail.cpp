#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int t,sx,sy,ex,ey;
	cin >> t >> sx >> sy >> ex >> ey;
	string str;
	cin >> str;
//	int dx = ex-sx;
//	int dy = ey-sy;
	int i=0;
//	while (i<=str.length()){
//		cout << str[i];
//		i++;
	int flag = 0;
	for (int i=0;i<t;++i){
		if (str[i] == 'E'){
			if(sx<ex){
				sx++;
//				cout << "east\n";
			}
		}
		else if (str[i] == 'W'){
			if(sx>ex){
				sx--;
//				cout << "west\n";
			} 
		}
		else if (str[i] == 'N'){
			if(sy<ey){
				sy++;
//				cout << "north\n";
			} 
		}
		else if (str[i] == 'S'){
			if(sy>ey){
				sy--;
//				cout << "south\n";
			} 
		}
		
		if (sx == ex && sy == ey){
			cout << i+1;
			flag++;
			break;
		}
	}
	if (flag == 0) cout << "-1\n";
//	while ((dx!=0||dy!=0)&&i<=str.length()){
//		i++;
//	}
//	if (i == str.length()+1) cout << "-1\n";
//	else cout << i << endl;
	return 0;
}

