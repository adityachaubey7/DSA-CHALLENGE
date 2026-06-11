#include<iostream>
#include<cmath>
using namespace std;
int hcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / hcf(a, b);
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "HCF = " << hcf(a, b) << endl;
    cout << "LCM = " << lcm(a, b) << endl;


 
    return 0;
}
