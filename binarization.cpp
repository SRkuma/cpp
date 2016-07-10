#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip> // setprecision
#include <utility>    // c+11 Array
#include <map>
#include <queue>
#define ll long long
#define MOD 1000000007
#define PI 3.14159265358979
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define pb(x) push_back(x)
#define debug(x) cout << #x << " = " << x << endl
#define debret(x) cout << #x << " = " << x << endl; return 0;
using namespace std;

const int N = 102;

void bin(char a[][N],char b[][N],int H, int W, char c);

int main(void){

    char image[N][N];

    // initialize
    REP(i,N){
        REP(j,N){
            image[i][j] = '-';
        }
    }
    
    int H,W;
    cin >> H >> W;
    
    FOR(i,1,H+1){
        FOR(j,1,W+1){
            cin >> image[i][j];
        }
    }
    
    char white[N][N];

    // copy
    REP(i,N){
        REP(j,N){
            white[i][j] = image[i][j];
        }
    }
    
    // fill "."
    bin(image,white,H,W,'.');
    
    char black[N][N];

    // copy
    REP(i,N){
        REP(j,N){
            black[i][j] = white[i][j];
        }
    }
    
    // fill "#"
    bin(white,black,H,W,'#');


    
    FOR(i,1,H+1){
        FOR(j,1,W+1){
            if(black[i][j] != image[i][j]){
                cout << "impossible" << endl;
                return 0;
            }
        }
    }

    cout << "possible" << endl;
    FOR(i,1,H+1){
        FOR(j,1,W+1){
            cout << white[i][j];
        }
        cout << endl;
    }
    return 0;
}

void bin(char a[][N],char b[][N],int H, int W, char c){

    FOR(i,1,H+1){
        FOR(j,1,W+1){
            if(a[i][j] == c){
                b[i-1][j-1] = c; //LU
                b[i-1][j] = c;   //U
                b[i-1][j+1] = c; //RU
                b[i][j-1] = c;   //L
                b[i][j+1] = c;   //R
                b[i+1][j-1] = c; //DL
                b[i+1][j] = c;   //D
                b[i+1][j+1] = c; //DR
            }
        }
    }

}
