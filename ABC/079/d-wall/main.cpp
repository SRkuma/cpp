#include <iostream>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

#define N 10

int cost[N][N];

void warshall_floyd(){
  REP(k,N){
      REP(i,N){
          REP(j,N){
            cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
          }
      }
  }
}

int main(void){

  int h,w;
  cin >> h >> w;

  REP(i,N){
    REP(k,N){
      cin >> cost[i][k];
    }
  }

  warshall_floyd();

  int a[h][w];

  REP(i,h){
    REP(k,w){
      cin >> a[i][k];
    }
  }

  long long ans = 0;

  REP(i,h){
    REP(k,w){

      if(a[i][k] == -1 || a[i][k] == 1) continue;
      
      ans += cost[a[i][k]][1];
    }
  }

  cout << ans << endl;
    
  return 0;
}
