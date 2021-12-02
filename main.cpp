#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    a--;
    b--;
    vector <int> mass(n);
    for (int i = 0; i < n; i++){
        cin >> mass[i];
    }
    for (int i = a; i < (b + a) / 2; i++){
        int buff = mass[i];
        mass[i] = mass[b - i + a];
        mass[b - i + a] = buff;
    }
    for (int i = 0; i < n; i++){
        cout << mass[i] << " ";
    }
}