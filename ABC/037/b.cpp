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

int main(void){
    
    int N,Q;
    cin >> N >> Q;
    
    int a[N+1];

    fill(a,a+N+1,0);
    
    REP(i,Q){
        
        int l,r,t;
        cin >> l >> r >> t;
        
        for(int j = l; j <=r;j++){
            a[j] = t;
        }
    }
    
    FOR(i,1,N+1){
        cout << a[i] << endl;    
    }
    
  return 0;
  
}
