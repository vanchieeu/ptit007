#include <iostream>
#include <map>
using namespace std;

typedef long long ll;

bool checkNumber(ll n) {
    while (n!=0) {
        if (n%3==2)
            return false;
        n/=3;
    }
    return true;
}

int main() {
    map <ll, bool> b;
    for (int i = 1; i < 19684; i++)
        b[i] = checkNumber(i);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        for (int j = k;;j++)
            if (b[j] == true) {
                cout << j << endl;
                break;
            }
    }
    return 0;
}