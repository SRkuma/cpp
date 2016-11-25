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

    int N;

    cin >> N;
    int sub[N+1];
    int worker[N+1];

    fill(sub,sub+(N+1),0);
    fill(worker,worker+(N+1),1);

    FOR(i,2,N+1){
        cin >> sub[i];
    }

    // REP(i,N+1){
    //     printf("sub[%d] = %d\n",i,sub[i]);
    // }


    while(1){
        int workerMax = 0;
        int workerMin = 1e+9;
        int subMax = *std::max_element(sub,sub+(N+1));
        if(subMax == 0) break;
        FOR(j,1,N+1){
            if(sub[j] == subMax){
                workerMax = max(workerMax,worker[j]);
                workerMin = min(workerMin,worker[j]);
                sub[j] = 0;
            }
        }
        worker[subMax] += workerMax+workerMin;
        //debug(subMax)
        //debug(worker[subMax])
    }

    cout << worker[1] << endl;

    return 0;
}
