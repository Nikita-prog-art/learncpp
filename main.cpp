#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int mass[20];
    for (int i = 0; i < n; i++){
        cin >> mass[i];
    }
    for (int i = 0; i < n - 1; i += 2){
        int buff = mass[i];
        mass[i] = mass[i + 1];
        mass[i + 1] = buff;
    }
    for (int i = 0; i < n; i++){
        cout << mass[i];
    }
}