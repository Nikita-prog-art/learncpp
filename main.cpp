#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<int> mass(20001, 0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        int buff;
        cin >> buff;
        mass[buff + 10000]++;
    }
    for (int i = 0; i < 20001; i++)
        while (mass[i] != 0) {
            cout << i - 10000 << " ";
            mass[i]--;
        }
}