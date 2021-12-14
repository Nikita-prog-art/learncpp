#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> mass(n);
    for (int i = 0; i < n; i++)
        cin >> mass[i];
    long long cnt = 0;
    for (int i = 0; i < n - 1; i++){
        bool sd = true; //обмена нет
        for (int j = 0; j < n - 1 - i; j++)
            if (mass[j] > mass[j + 1]){
                swap(mass[j], mass[j + 1]);
                sd = false; //обмен есть!
                cnt++;
            }
        if (sd)
            break;
    }
    cout << cnt;
}