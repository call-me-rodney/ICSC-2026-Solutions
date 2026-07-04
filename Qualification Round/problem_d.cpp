#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

/**
 * @param events Vector of {player, frame, attack_value}
 * @param H      Starting HP for both players
 * @return vector {hp1, hp2} each clamped to min 0
 */
vector<int> processGame(vector<vector<int>> events, int H) {

    // WRITE YOUR CODE HERE

    return {0, 0};
}


// --- Main execution block. DO NOT MODIFY ---
int main() {
    try {
        int H, n;
        cin >> H >> n;
        vector<vector<int>> events(n, vector<int>(3));
        for (int i = 0; i < n; i++) {
            cin >> events[i][0] >> events[i][1] >> events[i][2];
        }

        vector<int> result = processGame(events, H);
        cout << result[0] << " " << result[1] << endl;

    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }
    return 0;
}
