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

    string str;

    cin >> str;
	int n = str.size();
    
	long long int sum = 0;

    // pow(2,n-1)
	// cout <<( 1 << (n - 1) )<< endl;    
 
	for (int mask = 0; mask < (1 << (n-1)); mask++) {

        long long int acc = (str[0] - '0');

        for (int i = 0; i < n-1; i++) {
			if (((mask >> i) & 1) == 1) {
				sum += acc;
				acc = 0;
			}
			acc = acc * 10 + (str[i+1] - '0');
		}
		sum += acc;
	}
 
	cout << sum << endl;
 
	return 0;
}
