#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        // cout << t << endl;
        int n, m;
        cin >> n >> m;
        vector<vector<char> >arr(n, vector<char>(m,0));
        for (int i=0;i<n;++i){
            for (int j=0;j<m;++j){
                cin >> arr[i][j];
            }
        }   
        int ans = 0;
        for (int i=0;i<m-1;++i){
            if (arr[n-1][i] != 'R'){
                ans++;
                arr[n-1][i] = 'R';
            }
        }
        for (int i=0;i<n-1;++i){
            if (arr[i][m-1] != 'D'){
                ans++;
                arr[i][m-1] = 'D';
            }
        }
        cout << ans << endl;
    }
    return 0;
}