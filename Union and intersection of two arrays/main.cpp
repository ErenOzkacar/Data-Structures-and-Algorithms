//
//  main.cpp
//  Union and intersection of two arrays
//
//  Created by Eren Özkacar on 25.12.20.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> unionOfArrays(vector<int> &a1, vector<int> &a2);
vector<int> intersectionOfArrays(vector<int> &a1, vector<int> &a2);
void clearArray(vector<int> &a);

int main(int argc, const char * argv[]) {
    vector<int> array1 {0, 1, 2, 3, 4, 10, 20, 30, 40, 50, 5, 9, 2};
    vector<int> array2 {1, 3, 5, 20, 40, 9, 8, 7, 6};
    
    vector<int> unionElements = unionOfArrays(array1, array2);
    vector<int> intersectionElements = intersectionOfArrays(array1, array2);
    
    for (int i = 0; i < unionElements.size(); ++i) {
        cout << unionElements.at(i) << " ";
    }
    cout << '\n';
    for (int i = 0; i < intersectionElements.size(); ++i) {
        cout << intersectionElements.at(i) << " ";
    }
    cout << '\n';
    return 0;
}

vector<int> unionOfArrays(vector<int> &array1, vector<int> &array2) {
    vector<int> unionElements;
    for (int i = 0; i < array1.size(); ++i) {
        for (int j = 0; j < array2.size(); ++j) {
            if (array1.at(i) == array2.at(j)) {
                unionElements.push_back(array1.at(i));
                break;
            }
        }
    }
    clearArray(unionElements);
    return unionElements;
}

vector<int> intersectionOfArrays(vector<int> &array1, vector<int> &array2) {
    vector<int> intersectionElements;
    bool contains;
    for (int i = 0; i < array1.size(); ++i) {
        contains = false;
        for (int j = 0; j < array2.size(); ++j) {
            if (array1.at(i) == array2.at(j)) {
                contains = true;
                break;
            }
        }
        if (contains == false) {
            intersectionElements.push_back(array1.at(i));
        }
    }
    for (int i = 0; i < array2.size(); ++i) {
        contains = false;
        for (int j = 0; j < array1.size(); ++j) {
            if (array2.at(i) == array1.at(j)) {
                contains = true;
                break;
            }
        }
        if (contains == false) {
            intersectionElements.push_back(array2.at(i));
        }
    }
    clearArray(intersectionElements);
    return intersectionElements;
}

void clearArray(vector<int> &array) {
    for (int i = 0; i < array.size(); ++i) {
        for (int j = i + 1; j < array.size(); ++j) {
            if (array.at(i) == array.at(j)) {
                array.erase(array.begin() + i);
            }
        }
    }
}
