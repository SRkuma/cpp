#include <iostream>
#include <stdio.h>       // printf,scanf
#include <stdlib.h>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>  //sort,binarySearch
#include <functional> 
#include <iomanip>    // setprecision
#include <utility>    // c+11 Array
#include <set>
#include <sstream>
#include <map>
#include <bits/stdc++.h>
#define MOD (1e+9)+7
#define PI 3.141592653589793238462643383279
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define pb(x) push_back(x)
#define debug(x) cout << #x << " = " << x << endl;
#define debret(x) debug(x) ; return 0;

using namespace std;

int a[100000];
int dp[100000];
 
int main(void){
 
    const int INF = 1e+9;
    int n;
 
    cin >> n;
 
    REP(i,n){
        cin >> a[i];
    }
 
    dp[1] = abs(a[1] - a[0]);
    
    FOR(i,2,n){
        int dis1 = abs(a[i] - a[i-1]);
        int dis2 = abs(a[i] - a[i-2]);
        
        dp[i] = min(dp[i-1]+dis1, dp[i-2]+dis2);
    }

    cout << dp[n-1] << endl;
    return 0;
}
