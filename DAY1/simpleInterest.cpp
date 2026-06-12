#include<iostream>
using namespace std;
int main(){
    long long principal;
    int time;
    float rate;
    cout<<"enter the input pricipal,time,rate follows as ";
    cin>>principal>>time>>rate;
    double si;
    si=(principal*rate*time)/100;

    cout<<"the simple interest is :"<<si<<"\n";

    return 0;
}
