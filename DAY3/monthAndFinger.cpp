#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string months[12] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    string fingers[5] = {
        "Thumb",
        "Index Finger",
        "Middle Finger",
        "Ring Finger",
        "Little Finger"
    };

    int monthIndx = (n - 1) % 12;
    int fingerIndx = (n - 1) % 5;

    cout << "Month:-> " << months[monthIndx] << endl;
    cout << "Finger:-> " << fingers[fingerIndx] << endl;

    return 0;
}
