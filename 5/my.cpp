#include <iostream>
#include <vector>
using namespace std;
int main(void){
    vector<int> vec = {4, 0, 5, -1, 3, 10, 6, -8};
    int a = 0;
    for(int n: vec){
        if(n >= 5){
            a += n;
        }
    }
    cout << a << endl;
}
