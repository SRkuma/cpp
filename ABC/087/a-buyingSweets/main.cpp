#include <iostream>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){
  int n,a,b;

  cin >> n >> a >> b;

  int rest = n-a;
  int num = rest / b;
  int ans = rest - (num*b);
  cout << ans << endl;
    
  return 0;
}
