//
//  main.cpp
//  Minimum and maximum of an array
//
//  Created by Eren Özkacar on 16.12.20.
//
//  A program to find the maximum and minimum of an array

#include <iostream>
#include <vector>
using namespace std;

struct Pair {
    int minimum;
    int maximum;
};

struct Pair searchMinMax(vector<int> array){
    Pair p {array[0], array[0]};
    
    for (const auto element : array) {
        if (element < p.minimum) {
            p.minimum = element;
        }
        if (element > p.maximum) {
            p.maximum = element;
        }
    }
    return p;
}

int main(int argc, const char * argv[]) {
    vector<int> array {1, 3, 4, 5, 2, 5, 9, 12, 4, 24, 6, 3};
    Pair p {searchMinMax(array)};
    
    cout << "Minimum: " << p.minimum << endl << "Maximum: " << p.maximum << endl;
    return 0;
}
