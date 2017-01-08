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



int main(){
 
    int N,T;
    cin >> N >> T;
 
    int pastTime[N+1];
 
    REP(i,N){
        cin >> pastTime[i];
    }
 
    pastTime[N] = 1e+9;
 
    int sumT = 0;
    int openT = 0;
    bool is_open = false;
    int tmp = 0;
    REP(i,N){
 
        if(!is_open){
            tmp = pastTime[i];
        }
        
        if(pastTime[i] + T >= pastTime[i+1]){
            is_open = true;
            continue;
        }
        
        if(is_open){
            openT = pastTime[i] - tmp;
            is_open = false;
        }
        sumT += T + openT;
        openT = 0;
    }
 
    cout << sumT << endl;
 
    return 0;
}
