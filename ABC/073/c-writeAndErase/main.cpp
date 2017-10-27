#include <iostream>
#include <algorithm>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;
 
int main(void){
 
  int N;
  cin >> N;
  int a[N];

  REP(i,N){
    cin >> a[i];
  }
 
  sort(&a[0],&a[N]);
 
  int cnt = 1;
  int ans = 0;
  int tmp = a[0];
  FOR(i,1,N){
    if(a[i] == tmp){
      cnt++;
    }else{
      if(cnt % 2 == 1) ans++;
      tmp = a[i];
      cnt = 1; 
    }
  }

  if(cnt % 2 == 1) ans++;
  cout << ans << endl;
 
  return 0;
}