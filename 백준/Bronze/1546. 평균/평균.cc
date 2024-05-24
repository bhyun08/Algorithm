#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> score(n);
    int max_score = -1;

    for (int i = 0; i < n; i++) {
        cin >> score[i];
        if (score[i] > max_score) {
            max_score = score[i];
        }
    }

    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += (score[i] / (double)max_score) * 100;
    }

    double avg = sum/n;
    cout << avg;
    return 0;
}
