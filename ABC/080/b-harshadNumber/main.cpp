#include <iostream>
#include <math.h>
typedef long long ll;

#define FOR(i,a,b) for(ll i = (a);i < (b);++i)
#define REP(i,n) FOR(i,0,n)

#define debug(x) cout << #x << "=" << x << endl;

using namespace std;

int main(void){

  string str;
  int sum = 0;
  int n = 0;
  cin >> str;

  REP(i,(int)str.size()){
    sum += str[i] - '0';
    n += (str[i] - '0') * pow(10,(int)str.size()-i-1);
  }

  if(n % sum == 0){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

  return 0;
}
