#include <iostream>
using namespace std;
int main(){
    vector<int> v = {9, 4, 3, 7, 10, 24, 100};
    for (int i = 0, j = v.size() - 1; i < j; i++, j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}
