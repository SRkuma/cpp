#include <iostream>
#include <math.h>

typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){

  int n,x,y;
  cin >> n >> x >> y;

  int a[n];
  REP(i,n){
    cin >> a[i];
  }

  if(n == 1){
    cout << abs(a[0]-y) << endl;
    return 0;
  }

  int ans1 = abs(a[n-1] - y);
  int ans2 = abs(a[n-2] - a[n-1]);

  cout << max(ans1,ans2) << endl;
       
  
  return 0;
}
