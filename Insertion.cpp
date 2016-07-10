#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <utility>
#include <map>
#define ll long long
#define N 10
#define PI 3.14159265358979
#define rep(i,n) for(ll (i)=0;(i)<(ll)(n);++(i))
#define pb(x) push_back(x)
#define debug(x) cout << #x << " = " << x << endl
#define debret(x) cout << #x << " = " << x << endl; return 0;
using namespace std;

void Insertion(int a[], int n);

void Insertion(int a[],int n){
  for(int i = 0;i<n;i++){
    int key = a[i];
    int j = i -1;
    while (j>=0 &&a[j] > key){
      a[j+1] = a[j];
      j--;
      a[j+1] = key;
    }
  }
}

int main(void){
  int n;
  int a[101] = {};
  cin >> n;
  for(int i = 0;i<n;i++){
    cin >> a[i];
  }
  Insertion(a,n);
  for(int k = 0;k<n;k++){
    if(k) cout << " ";
    cout << a[k];
  }
  cout << endl;
  return 0;
}
 
