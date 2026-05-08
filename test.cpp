#include <iostream>

using namespace std;

int main() {
    cout << "CHATGPT: How may i assist you?" << endl;
    string cmnd;
    cin >> cmnd;
    system("clear");
    
    for (int i = 0; i < 6; i++) {
        cout << "THNKING";
        for (int a = 0; a < (i%2)+1; a++) {
            cout << ".";
        }
        cout << endl;
        system("sleep 1");
        system("clear");
    }

    cout << "CHATGPT: No, shut up you parasite" << endl;
}