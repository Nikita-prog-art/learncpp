#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> mass(n);
    vector <int> imass(n);
    for(int i = 0; i < n; i++)
        cin >> mass[i];
    for (int i = 0; i < n; i++)
        imass[i] = i + 1;
    int i = 1;
    while(i < n) {
        if(mass[i] > mass[i - 1]) {
            int x = mass[i];
            int ix = imass[i];
            int j = i - 1;
            while(j >= 0 && mass[j] < x) {
                mass[j + 1] = mass[j];
                imass[j + 1] = imass[j];
                j--;
            }
            mass[j + 1] = x;
            imass[j + 1] = ix;
        }
        i++;
    }
    for(auto x : imass)
        cout << x << " ";
    return 0;
}