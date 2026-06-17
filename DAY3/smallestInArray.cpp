#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> v={9,3,5,4,7,9};
    int min=v[0];
    for(int i=0;i<v.size();i++){
        if(v[i]<min){
           min=v[i];
        }
    }
    cout<<min;
 return 0;
}
