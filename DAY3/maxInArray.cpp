#include<iostream>
using namespace std;
int main(){
   vector<int>v={9,4,3,7,10,24,100};
    int max=INT_MIN;
    for(int i=0;i<v.size();i++){
      if(v[i]>max){
        max=v[i];
      }
    }
    cout<<max;
    return 0;
}
