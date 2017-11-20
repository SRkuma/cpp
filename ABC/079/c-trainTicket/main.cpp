#include <iostream>
#include <math.h>
typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){

  string str;
  cin >> str;
  
  int a,b,c,d;
  a = str[0] - '0';
  b = str[1] - '0';
  c = str[2] - '0';
  d = str[3] - '0';
  REP(k,2){
    int op1 = pow(-1,k);
    REP(i,2){
    int op2 = pow(-1,i);
      REP(j,2){
      int op3 = pow(-1,j);
        if(a+op1*b+op2*c+op3*d == 7){
          cout << a << (op1 == 1 ? '+' : '-') << 
                  b << (op2 == 1 ? '+' : '-') <<
                  c << (op3 == 1 ? '+' : '-') <<
                  d << "=7" << endl;
          return 0;
        }
      }
    }
  }

  return 0;
}
