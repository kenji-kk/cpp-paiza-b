#include <iostream>
#include <vector>
using namespace std;
int main(void){
    vector<int> vec = {1, 3, 5, 6, 3, 2, 5, 23, 2};
    int a = 0;
    for(int n : vec){
        a += n;
    }
    cout << a << endl;
}
