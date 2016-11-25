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
#define pb(x) push_back(x)
#define debug(x) cout << #x << " = " << x << endl;
#define debret(x) debug(x) ; return 0;

using namespace std;

int main(void){
    
    int N;
    cin >> N;
    
    int a[N];
    
    REP(i,N){
        cin >> a[i];
    }
    
    int ans = 1e+9;
    
    FOR(i,-100,101){
        
		int sum = 0;
        
		REP(j,N){
            sum += (a[j] - i) * (a[j] - i);
        }
		ans = min(ans, sum);
	}
	cout << ans << endl;

    return 0;
}
