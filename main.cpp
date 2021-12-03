#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> mass(n);
    for (int i = 0; i < n; i++)
        cin >> mass[i];
    vector <int> unsMass;
    for (int i = 0; i < n; i++)
        if (mass[i] >= 0)
            unsMass.push_back(mass[i]);
    for (auto x : unsMass)
        cout << x << " ";
}