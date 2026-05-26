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

    int currentIndex;

    while(true) {
        currentIndex = (a+b+1)/2;
        if(list[currentIndex] == n) {
            index = currentIndex;
            break;
        } else {
            if(list[currentIndex] > n) {
                b = currentIndex;
            } else if(list[currentIndex] < n) {
                a = currentIndex;
            }
        }
    }

    cout << n << " is at index " << index << ":" << list[index] << endl;

}