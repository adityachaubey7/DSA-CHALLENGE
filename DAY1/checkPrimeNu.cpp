
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int number;
    cout<<"enter a nu";
    cin>>number;
    
    for(int i=2;i<=sqrt(number);i++){
        if(number%2==0){
            cout<<number<<"is not  prime"<<endl;
            break;
        }
        else{
            cout<<number<<"is  prime";
            break;
        }
    }
       
    return 0;
}
