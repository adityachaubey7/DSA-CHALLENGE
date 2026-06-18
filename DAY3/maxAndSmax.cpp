#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v = {8, 5, 4, 1, 0, 9};
    int mx = INT_MIN;
    int smx = INT_MIN;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > mx){
            smx = mx;
            mx = v[i];
        }
        else if (v[i] > smx && v[i] != mx){
            smx = v[i];
        }
    }
    cout << "Max " << mx << endl;
    cout << "Second Max" << smx;
    return 0;
}
