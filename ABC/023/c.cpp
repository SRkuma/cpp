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
#define FOR(i,a,b) for(long long int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define DFOR(i,a,b) for(long long int i=(a);i>=(b);--i)
#define DREP(i,n)  DFOR(i,n,0)
#define pb(x) push_back(x)
#define debug(x) cout << #x << " = " << x << endl;
#define debret(x) debug(x) ; return 0;

using namespace std;

int main(){

    int H,W;
    int K;
    cin >> H >> W >> K;
    int N;
    cin >> N;

    pair <int, int> coordinate[N];

    REP(i,N){
        int tmpx,tmpy;
        cin >> tmpy >> tmpx;
        tmpy--;
        tmpx--;
        coordinate[i] = make_pair(tmpy,tmpx);
    }

    long long int yNum[N];
    long long int xNum[N];

    fill(yNum,yNum+N,0);
    fill(xNum,xNum+N,0);

    REP(i,N){
        yNum[coordinate[i].first]++;
        xNum[coordinate[i].second]++;
    }
    // REP(i,N){
    //     cout << yNum[i] << " ";
    // }
    // cout << endl;
    // REP(i,N){
    //     cout << xNum[i] << " ";
    // }
    // cout << endl;

    long long int yRow[N+1];
    long long int xCol[N+1];

    fill(yRow,yRow+N+1,0);
    fill(xCol,xCol+N+1,0);

    REP(i,H){
        yRow[yNum[i]]++;
    }
    
    // REP(i,N){
    //     cout << yRow[i] << endl;
    // }
    
    REP(i,W){
        xCol[xNum[i]]++;
    }
    // REP(i,N){
    //     cout << xCol[i] << endl;
    // }

    long long int cnt = 0;
    REP(i,K+1){
        cnt += yRow[i] * xCol[K-i];
    }
    REP(i,N){
        long long int tmp = yNum[coordinate[i].first] + xNum[coordinate[i].second];
        if(tmp == K){
            cnt--;
        }else if(tmp == K+1){
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}
