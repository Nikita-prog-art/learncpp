#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> mass(n);
    for (int i = 0; i < n; i++)
        cin >> mass[i];
    int r;
    cin >> r;
    cout << "before: ";
    for (int i = 0; i < n; i++)
        cout << mass[i] << " ";
    vector <int> newMass(n);
    for (int i = 0; i < n; i++){
        int ri = (r + i) % n;
        newMass[ri] = mass[i];
    }
    cout << "\n";
    cout << "after: ";
    for (int i = 0; i < n; i++)
        cout << newMass[i] << " ";
}