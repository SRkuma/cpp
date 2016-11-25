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


int main(void) {
	int n, k;
	int hate[10];
	bool flag;
    string str;
 
	cin >> n >> k;

    REP(i,k) cin >> hate[i];

    for (int i = n; ; i++) {
		str = to_string(i);
        //debug(str);
		flag = true;
        REP(j,k){
            //debug(to_string(hate[j]))
			if (str.find(to_string(hate[j])) != -1) {
				flag = false;
				break;
			}
		}
		if (flag) {
			cout << i << endl;
			break;
		}
	}
 
	return 0;
}
