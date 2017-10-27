#include <iostream>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

#define MAX_N 300

using namespace std;

int d[MAX_N+1][MAX_N+1];

int v;

void warshall_floyd(){
  FOR(k,1,v+1){
      FOR(i,1,v+1){
          FOR(j,1,v+1){
            d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
          }
      }
  }
}

int main(void){

  cin >> v;

  int a[MAX_N+1][MAX_N+1];

  FOR(i,1,v+1){
    FOR(k,1,v+1){
      cin >> d[i][k];
      a[i][k] = d[i][k];
    }
  }

  warshall_floyd();

  FOR(i,1,v+1){
    FOR(k,1,v+1){
      if(a[i][k] != d[i][k]){
        cout << -1 << endl;
        return 0;
      }
    }
  }

  ll ans = 0;

  FOR(i,1,v+1){
    FOR(j,1,v+1){
      bool isShortest = true;
      FOR(k,1,v+1){
        if(i != k && j != k && d[i][j] == d[i][k] + d[k][j]) isShortest = false;
      }
      if(isShortest) ans+=d[i][j];
    }
  }

  cout << ans / 2 << endl;
 
  return 0;
}
