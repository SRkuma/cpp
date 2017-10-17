#include <iostream>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

const int limit = 50;

int n,m;
int a[limit], b[limit];

bool graph[limit][limit];
bool visited[limit];

void dfs(int v) {
  visited[v] = true;
  REP(i,n){
    if(graph[v][i] == false) continue;
    if(visited[i] == true) continue;
    dfs(i);
  }
}

int main(void){

  cin >> n >> m;
  
  REP(i,m){
    cin >> a[i] >> b[i];
    a[i]--;
    b[i]--;
    // make adjacent matrix
    graph[a[i]][b[i]] = graph[b[i]][a[i]] = true;
  }

  int ans = 0;

  REP(i,m){
    graph[a[i]][b[i]] = graph[b[i]][a[i]] = false;
    REP(k,n){
      visited[k] = false;
    }
    dfs(0);
    bool bridge = false;
    REP(k,n){
      if(visited[k] == false) bridge = true;
    }
    if(bridge == true) ans++;

    graph[a[i]][b[i]] = graph[b[i]][a[i]] = true;
  }

  cout << ans << endl;

  return 0;
}
