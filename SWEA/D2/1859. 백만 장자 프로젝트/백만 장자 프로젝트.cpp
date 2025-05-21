#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    for (int test_case = 1; test_case <= T; test_case++) {
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        // 뒤에서부터 최대값 저장
        vector<int> max_after(n);
        max_after[n - 1] = v[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            max_after[i] = max(v[i], max_after[i + 1]);
        }

        long long total = 0;
        for (int i = 0; i < n - 1; i++) {
            int diff = max_after[i + 1] - v[i];
            if (diff > 0) total += diff;
        }

        cout << "#" << test_case << " " << total << "\n";
    }

    return 0;
}
