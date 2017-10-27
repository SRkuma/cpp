#include <iostream>
#include <math.h>
typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){
  
  int N,K;
  cin >> N >> K;

  int a[N+1];
  FOR(i,1,N+1){
    cin >> a[i];
  }

  int ans = 0;
  FOR(i,1,N+1){
    int aDis = a[i] * 2;
    int bDis = abs(K - a[i]) * 2;
    ans += min(aDis,bDis);
  }

  cout << ans << endl;

  return 0;
}
