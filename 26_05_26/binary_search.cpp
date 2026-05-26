#include <iostream>

using namespace std;

int main() {
    int a = 0, b = 9;
    int list[10] = {2, 6, 8, 3, 5, 9, 1, 7, 4, 0};
    int temp;
    bool is_sorted = false;

    while(!is_sorted) {
        for (int i = 0; i < 10; i++) {
            if(i!=9) {
                if(list[i]>list[i+1]){
                    temp = list[i];
                    list[i] = list[i+1];
                    list[i+1] = temp;
                }
            }
        }

        for(int i = 0; i < 10; i++) {
            if(i!=9) {
                if(list[i+1]>=list[i]) {
                    continue;
                } else {
                    break;
                }
            } else {
                is_sorted = true;
            }
        }
    }

    int index;
    int n;

    cout << "n:";
    cin >> n;

    int current_index;
    int last_index;

    while(true) {
        current_index = (a+b+1)/2;
        if(list[current_index] == n) {
            index = current_index;
            cout << n << " is at index " << index << ":" << list[index] << endl;
            break;
        } else {
            temp = current_index;
            if(list[current_index] > n) {
                b = current_index;
            } else if(list[current_index] < n) {
                a = current_index;
            }
        }
        if(current_index == temp) {
            cout << "nav" << endl;
            break;
        }
    }


}