#include <iostream>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

#define MAX_N 100000

using namespace std;

int par[MAX_N];
int rank[MAX_N];

void init(int n){
  REP(i,n){
    par[i] = i;
    rank[i] = 0;
  }
}

int find(int x){
  if(par[x] == x){
    return x;
  }else{
    return par[x] = find(par[x]);
  }
}

void unite(int x, int y){
  x = find(x);
  y = find(y);
  if (x == y) return;

  if(rank[x] < rank[y]){
    par[x] = y;
  }else{
    par[y] = x;
    if(rank[x] == rank[y]) rank[x]++;
  }
}

bool same(int x, int y){
  return find(x) == find(y);
}

int main(void){

  int N,M;
  cin >> N >> M;
  init(N);

  int L,R,D;
  REP(i,M){
    cin >> L >> R >> D;
  }
    
  return 0;
}
