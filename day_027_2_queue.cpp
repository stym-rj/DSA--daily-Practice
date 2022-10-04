#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int push;
    cin >> push;
    int size;
    cin >> size;
    if (size > 9) {
        cout << "No other spectator is allowed" ;
        return 0;
    }
    string arr[size];
    for(int i = 0; i < size; i++) {
        string name;
        cin >> name;
        arr[i] = name;
    }
    
    int display;
    cin >> display;
    for(int i = 1; i < size; i += 2 ) {
        cout << arr[i] << " ";
    }
    return 0;
}
