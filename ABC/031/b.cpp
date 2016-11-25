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
#define MOD 1000000007
#define PI 3.141592653589793238462643383279
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define pb(x) push_back(x)
#define debug(x) cout << #x << " = " << x << endl;
#define debret(x) debug(x) ; return 0;

using namespace std;

int main(void){

    int L,H,N;

    cin >> L >> H >> N;


    int a[N];

    REP(i,N){
        cin >> a[i];
    }

    int ans;
    
    REP(i,N){
        
        if(a[i] < L){

            ans = L - a[i];
            
        }else if(L <= a[i] && a[i] <= H){

            ans = 0;
            
        }else{
            
            ans = -1;
        }

        cout << ans << endl;

    }

    return 0;
}
