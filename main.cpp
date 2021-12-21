#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> mass(n);
    for(int i = 0; i < n; i++)
        cin >> mass[i];
    int i = 1;
    while(i < n) {
        if(mass[i - 1] > mass[i]) {
            int x = mass[i];
            int j = i - 1;
            while(j >= 0 && mass[j] > x) {
                mass[j + 1] = mass[j];
                j--;
            }
            mass[j + 1] = x;
        }
        i++;
    }
    for(auto x : mass)
        cout << x << " ";
    return 0;
}