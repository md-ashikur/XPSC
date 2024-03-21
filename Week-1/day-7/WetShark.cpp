#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;


    long long odd = 1e9 + 1;
    long long sum = 0;

    for (int i = 0; i < n; ++i) {
        long long num;
        cin >> num;
        sum += num;
        if (num % 2 != 0) {
            odd = min(odd, num);
        }
    }

    if (sum % 2 == 0) {
        cout << sum << endl;
    } else {
        cout << sum - odd << endl;
    }

    return 0;
}
