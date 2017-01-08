#include <iostream>
#include <stdio.h>
#define FOR(i,a,b) for(long long int i =(a); i <(b);i++)
#define REP(i,N)   FOR(i,0,N)
#define debug(x)   cout << #x << " = " << x << endl;

using namespace std;

char field[500][500];
int sizeOfDia;
/*      i↓ k →
              *
             ***                   
            *****
             ***
              *                    */
int check(int y, int x){ //与えられた座標から菱形分とれるかどうか
    for (int i = 0; i < sizeOfDia; i++) {
        //マンハッタン距離 iが大きければkはその分小さくなる
        for (int k = 0; k < sizeOfDia - i; k++) {
            if (field[y-i][x-k] == 'x' || field[y-i][x+k] == 'x' ||
                field[y+i][x-k] == 'x' || field[y+i][x+k] == 'x') {
                return 0;
            }
        }
    }
    return 1;
}
 

int main(void){
    int H,W;
    
    cin >> H >> W >> sizeOfDia;

    REP(i,H){
        REP(k,W){
            cin >> field[i][k];
        }
    }

    int off = sizeOfDia -1;
    int cnt = 0;
    //菱形分の大きさがとれる所だけ見ればよい
    for (int i = off; i < H - off; i++) {
        for (int k = off; k < W - off; k++) {
            if (field[i][k] == 'o') cnt += check(i, k);
        }
    }
    
    cout << cnt << endl;
    
    return 0;
}
