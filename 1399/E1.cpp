#include<bits/stdc++.h>

using namespace std;

vector<int> w, cnt;
vector<vector<pair<int, int> > >g;

long long int getdiff(int i){
    return w[i] * 1ll * cnt[i] - (w[i] / 2) * 1ll * cnt[i];
}

void dfs(int v, int p = -1) {
	if (g[v].size() == 1) cnt[p] = 1;
	for (auto [to, id] : g[v]) {
		if (id == p) continue;
		dfs(to, id);
		if (p != -1) cnt[p] += cnt[id];
	}
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        long long int s;
        cin >> n >> s;
        w = cnt = vector<int>(n - 1);
		g = vector<vector<pair<int, int>>>(n);
		for (int i=0;i<n-1;++i){
            int x,y;
            cin >> x >> y >> w[i];

            x--; y--;
            g[x].push_back({y,1});
            g[y].push_back({x,1});
        }
        dfs(0);
        
    }
}