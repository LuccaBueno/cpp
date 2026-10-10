#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int input;
    
    vector<int> v(10);

    cin >> input;

    v[0] = input;

    cout << "N[0] = " << v[0] << endl;

    for (int i = 1; i < 10; i++) {
        v[i] = v[i - 1] * 2;

        cout << "N[" << i << "] = " << v[i] << endl;
    }
}
