#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#define debug(x) cout << #x << " = " << x << endl;
using namespace std;

class Dice{
public:
  int top,front,rear,right,left,bottom;
  void turnN();
  void turnE();
  void turnS();
  void turnW();
  void rotateCW();
  void rotateACW();
  void display();
};
  
void Dice::turnN(){
  int tmp =top;
  top = front;
  front = bottom;
  bottom = rear;
  rear = tmp;
}


void Dice::turnE(){
  int tmp =top;
  top = left;
  left = bottom;
  bottom = right;
  right = tmp;
}
void Dice::turnS(){
  int tmp =top;
  top = rear;
  rear = bottom;
  bottom = front;
  front = tmp;
}
void Dice::turnW(){
  int tmp =top;
  top = right;
  right = bottom;
  bottom = left;
  left = tmp;
}
void Dice::rotateCW(){
  int tmp =front;
  front = right;
  right = rear;
  rear = left;
  left = tmp;
}
void Dice::rotateACW(){
  int tmp =front;
  front = left;
  left = rear;
  rear = right;
  right = tmp;
}

void Dice::display(){
  cout << "top = " << top << " ";
  cout << "front = " << front <<  " ";
  cout << "right = " << right << " ";
  cout << "left = " << left << " ";
  cout << "rear = " << rear << " ";
  cout << "bottom = " << bottom << " " << endl;
}

bool is_same(Dice d1, Dice d2);
int elem_count(Dice d1);
int elem_count(Dice d1){
  int a[7] = {d1.top,d1.front,d1.right,d1.left,d1.rear,d1.bottom,d1.top};
  int cnt = 0;
  for(int i = 0;i<6;i++){
    if (a[i] == a[i+1]) cnt++;
  }
  return cnt;
}
bool  is_same(Dice d1, Dice d2){
  int count = 0;
  
  int count_eq = elem_count(d1);
  if(count_eq >= 4){
     return false;
  }
  while(d1.top != d2.top){
    if(count % 2 == 0){
      d1.turnN();
    }else{
      d1.turnE();
    }
    if(count > 6) break;
    count ++;
  }
  if (count > 6) return true;
  count = 0;
  
  while(d1.front != d2.front){
    d1.rotateCW();
    if(count > 4) break;
    count++;
  }
  if(count > 4) return true;
  
  if(d1.rear != d2.rear ||d1.bottom != d2.bottom||
     d1.right != d2.right|| d1.left != d2.left){
    return true;
  }else{
    return false;
  }
}

int main(void){
  Dice d1;
  Dice a[100];
  int n;
  cin >> n;
  bool flag = true;
  for(int i = 0;i<n;i++){
  cin >> d1.top >> d1.front >> d1.right >> d1.left >> d1.rear >> d1.bottom;
  a[i] = d1;
  }
  
  for(int i = 0;i<n-1;i++){
    for(int j = i+1;j<n;j++){
      flag = is_same(a[i],a[j]);
      if(flag == false) break;
    }
    if(flag == false) break;
  }
    if(flag == false){
      cout << "No" << endl;
    }else{
      cout << "Yes" << endl;
    }
  return 0;
}
