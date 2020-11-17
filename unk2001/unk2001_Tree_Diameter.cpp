// Word Combinations
// cses.fi/1131
#include <bits/stdc++.h>
 
using namespace std;
const int N = 200006;
 
int n;
vector<int> g[N];
 
pair<int, int>  BFS(int pivot) {
    queue<int> q;
    vector<int> d(n+1, -1);
    d[pivot] = 0; q.push(pivot);
 
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto v : g[u]) {
            if (d[v] == -1) {
                d[v] = d[u] + 1;
                q.push(v);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (d[pivot] < d[i]) {
            pivot = i;
        }
    }
    return make_pair(pivot, d[pivot]);
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i = 1; i < n; i++) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    auto z1 = BFS(1);
    auto z2 = BFS(z1.first);
    cout <<z2.second;
}
// author: unk2001
// profile: https://cses.fi/user/13599