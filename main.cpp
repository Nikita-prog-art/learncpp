#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, r;
    cin >> n >> r;
    vector <int> prets(n);
    for(int i = 0; i < n; i++)
        prets[i] = i + 1;
    for(int i = r - 1; prets.size() > 2; i = (i - 1 + r) % prets.size())
        prets.erase(prets.begin() + i);
    for (auto x : prets)
        cout << x << " ";
}