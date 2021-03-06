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
    
    int N;
    cin >> N;
    
    char a[N+1][N+1];

    FOR(i,1,N+1){
        FOR(j,1,N+1){
            cin >> a[i][j];
        }
    }
    
    FOR(j,1,N+1){
        for(int i = N; i > 0;i--){
            
            cout << a[i][j];
            
            if(i == 1) cout << endl;
            
        }
    }
    
    return 0;
}
