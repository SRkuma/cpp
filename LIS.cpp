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

int main(){
  int N;
  int a[1001];
  int dp[1001] = {};
  
  cin >> N;
  for(int i=0; i<N; i++) cin >> a[i];
  
  int ans = 1;
  for(int i=0; i<N; i++)
    {
      dp[i] = 1;
      for(int j=0; j<i; j++)
        {
          if(a[j] < a[i]) dp[i] = max(dp[i],dp[j]+1);
        }
      ans = max(ans,dp[i]);
    }

  cout << ans << endl;
  return 0;
}
