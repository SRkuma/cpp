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

    int pNum;
    int dNum;

    cin >> pNum;
    pNum++;
    int problem[pNum];
    fill(problem,problem+pNum,0);

    int sumTime = 0;
    FOR(i,1,pNum){
        cin >> problem[i];
        sumTime += problem[i];
    }
    
    cin >> dNum;
    pair <int,int> drink[dNum];

    REP(i,dNum){
        int key,value;
        cin >> key >> value;
        drink[i].first = key;
        drink[i].second = value;
    }
    int ans = 0;

    REP(i,dNum){
        int probIndex = drink[i].first;
        int solveTime = drink[i].second;

        ans = sumTime - problem[probIndex] + solveTime;
        cout << ans << endl;
    }

    return 0;
}
