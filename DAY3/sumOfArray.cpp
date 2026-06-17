#include<iostream>
using namespace std;
int main(){
   vector<int>v={9,4,3,7,10,24,100};
    int sum=0;
    for(int i=0;i<v.size();i++){
      sum+=v[i];
    }
    cout<<sum;
    return 0;
}
