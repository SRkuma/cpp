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
#define debug(x) cerr << #x << " = " << x << endl;
#define debret(x) debug(x) ; return 0;

using namespace std;

int main(){

    long long int N,x;
    cin >> N >> x;
    long long int a[N];
    long long int sum = 0;
    REP(i,N){
        cin >> a[i];
        sum += a[i];
    }
    if(x == 0){
        cout << sum << endl;
        return 0;
    }
    long long int ans = 0;
    REP(i,N-1){
        if(a[0] > x){
            ans += a[0] - x;
            a[0] -= a[0] - x;
        }

        if(a[i]+a[i+1] > x){
            ans += a[i]+a[i+1] - x;
            a[i+1] -= a[i]+a[i+1] - x;
        }
        
    }
    
    // REP(i,N){
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    

    cout << ans << endl;
    return 0;
}
