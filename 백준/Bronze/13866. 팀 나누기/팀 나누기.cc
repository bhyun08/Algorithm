#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int skills[4] = {A, B, C, D};
    int min_diff = INT_MAX;
    
    for (int i = 0; i < 4; ++i) {
        for (int j = i + 1; j < 4; ++j) {
            int team1 = skills[i] + skills[j];
            int team2 = 0;
            for (int k = 0; k < 4; ++k) {
                if (k != i && k != j) {
                    team2 += skills[k];
                }
            }
            int diff = abs(team1 - team2);
            min_diff = min(min_diff, diff);
        }
    }

    cout << min_diff << '\n';

    return 0;
}
