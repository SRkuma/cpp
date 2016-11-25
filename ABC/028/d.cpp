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

    double N;
    double K;
    
    cin >> N >> K;

    //double dup1 = (N-K)*(K-1)* 3!;
    //double dup2 = (N-1)*3;
    //double dup3 = 1;

    double dup = (N-K) * (K-1) * 6. + (N-1) * 3. + 1; 
    double ans = dup / N / N / N;
    
    cout << fixed << setprecision(10) <<  ans << endl;
    return 0;
}
