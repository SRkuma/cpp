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

  int ans = (int)1e+9;
  int candidate = 1;
  FOR(i,1,N+1){
    candidate = 1;
    candidate = pow(2,i) + (N-i)*K;
    ans = min(ans,candidate);
  }

  cout << ans << endl;
  
  return 0;
}
