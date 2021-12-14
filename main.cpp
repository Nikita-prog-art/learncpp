#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> mass(n);
    for (int i = 0; i < n; i++)
        cin >> mass[i];
    for (int i = 0; i < n - 1; i++){
        bool sorted = true; //обмена нет
        for (int j = 0; j < n - 1 - i; j++)
            if (mass[j] > mass[j + 1]){
                swap(mass[j], mass[j + 1]);
                sorted = false; //обмен есть!
            }
        if (sorted)
            break;
    }
    for (auto x : mass)
        cout << x << " ";
}