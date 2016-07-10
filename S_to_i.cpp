#include <iostream>
#include <stdio.h>       // printf,scanf
#include <stdlib.h>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>  //sort,binarySearch
#include <functional> 
#include <iomanip> // setprecision
#include <utility>    // c+11 Array
#include <set>
#include <sstream>
#include <bits/stdc++.h>
#define PI 3.141592653589793238462643383279
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define debug(x) cout << #x << " = " << x << endl;
#define debret(x) debug(x) ; return 0;

using namespace std;

int S_to_i(string s);

int main(void){
  const string input = "123";
  cout << S_to_i(input) * 10 << endl;
 
  return 0;
}

int S_to_i(string s){
  int tmp = 0;
  FOR(i,1,s.size()+1){
    tmp += (s[i-1] -'0') * pow(10,s.size() - i);
  }
  return tmp;
}
