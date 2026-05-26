#include <iostream>

using namespace std;

int main() {

    double x, y;

    cout << "x: ";
    cin >> x;

    cout << "y: ";
    cin >> y;

    while(y==0) {
        cout << "y nevar but 0" << endl;
        cout << "y: ";
        cin >> y;
    }

    double result = (x+10) / (3*y);

    cout << "result: " << result << endl;

    return 0;
}