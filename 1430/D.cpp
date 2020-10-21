#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        queue<int> q;
        int cur = 0;
		for(int i = 0; i < n; i++){
            if(i > 0 && s[i] != s[i - 1])
                cur++;
            if(i > 0 && s[i] == s[i - 1])
                q.push(cur);
		}
        int score = 0, deleted = 0;
        for (int i=0;i<n;++i){
            if (!q.size()) break;
            q.pop();
            deleted+=2;
            score++;
            while(q.size() && q.front() == i){
                q.pop();
                deleted++;
            }
        }
        score += (n-deleted + 1)/2;
        cout << score << endl;
    }
}