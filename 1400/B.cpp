#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int p, f;
        int cs, cw;
        int s, w;
        cin >> p >> f;
        cin >> cs >> cw;
        cin >> s >> w;

		if (s > w){
			int temp = s;
			s = w;
			w = temp;
			temp = cs;
			cs = cw;
			cw = temp;
		}
		int ans = 0;
		for (int i=0;i<min((p/s), cs);++i){
			int w1 = min(cw, (p - s * i) / w);
            int s2 = min(cs - i, f / s);
            int w2 = min(cw - w1, (f - s * s2) / w);
            ans = max(ans, i + s2 + w1 + w2);
		}
		cout << ans << endl;
    }
    return 0;
}