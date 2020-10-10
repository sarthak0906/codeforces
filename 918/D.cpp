#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int> > adj(n, vector<int>(n, 0));
    while(m--){
        int a,b;
        char c;
        cin >> a >> b >> c;
        adj[--a][--b] = int(c);
        
    }
}