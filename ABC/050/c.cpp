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
#include <bits/stdc++.h> // include all
#define MOD 1000000007
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
    int A[N];

    int sum = 0;
    REP(i,N){
        cin >> A[i];
        sum += A[i];
    }
    int Num[N];
    fill(Num,Num+N,0);

    REP(i,N){
        Num[A[i]]++;
    }
    
    FOR(i,1,N){
        if(Num[i] % 2 == 1){
            cout << 0 << endl;
            return 0;
        }
    }
    int ans = 1;
    REP(i,N/2){
        ans *= 2;
        ans %= MOD;
    }
    cout << ans << endl;

    return 0;
}
