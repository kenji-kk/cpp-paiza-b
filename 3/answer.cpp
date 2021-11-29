#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 3, 5, 6, 3, 2, 5, 23, 2};
    int ans = 0;
    for (int i = 0; i < vec.size(); ++i) {
        ans += vec[i];
    }
    cout << ans << endl;
}
