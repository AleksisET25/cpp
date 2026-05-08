#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {


    for (int i = 1; i < 51; i++) 
    {
        cout << i*2 << "% [";
        for (int j = 1; j < i; j++) 
        {
            cout << "#";
        }
        for (int a = i; a < 50; a++)
        {
            cout << "0";
        }
        cout << "]" << endl;
        system("sleep 0.1");
        if (i != 50) 
        {
            system("clear");
        }
    }
    cout << "DELETED ALL FILES SUCCESSFUL" << endl;
    
    return 0;
}