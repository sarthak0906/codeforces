#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	int arr[5][5];
	for (int i=0;i<5;++i){
		for (int j=0;j<5;++j) cin >> arr[i][j];
	}
	int max = INT_MIN;
	int p[5] = {0,1,2,3,4};
	do{
		int temp = 0;	
		temp += arr[p[0]][p[1]] + arr[p[1]][p[0]];
        temp += arr[p[2]][p[3]] + arr[p[3]][p[2]];
        
        //1234
        temp += arr[p[1]][p[2]] + arr[p[2]][p[1]];
        temp += arr[p[3]][p[4]] + arr[p[4]][p[3]];
        
        //234
        temp += arr[p[2]][p[3]] + arr[p[3]][p[2]];
        
        //34
        temp += arr[p[3]][p[4]] + arr[p[4]][p[3]];
		if (temp > max) max = temp;
	}while(next_permutation(p,p+5));
	cout << max << endl;
	return 0;
}

