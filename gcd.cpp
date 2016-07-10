#include <iostream>
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define debug(x) cout << #x << " = " << x << endl;
#define debret(x) debug(x) ; return 0;

using namespace std;

int Gcd(int n, int m);
int Lcm(int n, int m);

int main(void){
  int x,y;
  cin >> x >> y;
  debug(Gcd(x,y));
  debug(Lcm(x,y));
  return 0;
}

int Gcd(int n, int m){
  return (n == 0) ? m : Gcd(m % n,n);
}

int Lcm(int n, int m){
  return n / Gcd(n,m) * m;
}
