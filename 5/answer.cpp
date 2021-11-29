#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {4, 0, 5, -1, 3, 10, 6, -8};
    int ans = 0;
    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i] >= 5) {
            ans += vec[i];
        }
    }
    cout << ans << endl;
}
