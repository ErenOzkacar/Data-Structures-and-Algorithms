//
//  main.cpp
//  Reverse the array
//
//  Created by Eren Özkacar on 16.12.20.
//
//  A program to reverse an array

#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& array) {
    int end {(int) array.size() / 2};
    
    for (int i = 1; i <= end; ++i) {
        int temp {array[i - 1]};
        array[i - 1] = array[array.size() - i];
        array[array.size() - i] = temp;
    }
}

int main(int argc, const char * argv[]) {
    vector<int> array {1, 2, 3, 4, 5, 6, 7, 8};
    
    reverseArray(array);
    for (auto& i : array) {
        cout << i;
    }
    cout << endl;
    return 0;
}
