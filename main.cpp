#include <iostream>
#include <vector>

using namespace std;

struct point{
        int x, num;
        bool mast = false;
    };

bool cmpPoint(point a, point b){
    return a.x < b.x;
}

void quickSrt(vector <point> &arr, int left, int right) {
  int l, r, x;
  if(left >= right)
      return;
  l = left;
  r = right;
  x = arr[(l+r)/2].x;
  while(l <= r){
    while(arr[l].x<x)
      l++;
    while(arr[r].x>x)
      r--;
    if(l <= r){
      swap(arr[l], arr[r]);
      l++;
      r--;
    }
  }
  quickSrt(arr, left, r);
  quickSrt(arr, l, right);
}

int main(){
    int n;
    cin >> n;
    vector <point> line;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        point buff;
        buff.x = x;
        buff.num = i;
        line.push_back(buff);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++){
        int x;
        cin >> x;
        point buff;
        buff.x = x;
        buff.num = i;
        buff.mast = true;
        line.push_back(buff);
    }
    quickSrt(line, 0, line.size() - 1);
    cout << "\n\n";
    for (auto strt : line){
        cout << strt.x << " " << strt.num;
        if (strt.mast == true)
            cout << " master";
        cout << "\n";
    }
}