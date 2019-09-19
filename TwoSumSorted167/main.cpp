//
//  main.cpp
//  TwoSumSorted167
//
//  Created by Aj Gill on 9/18/19.
//  Copyright © 2019 Aj Gill. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> indices;
    int endPtr = numbers.size()-1;
    int beginPtr = 0;
    int sum = numbers[beginPtr] + numbers[endPtr];
    while(sum != target){
        sum = numbers[beginPtr] + numbers[endPtr];
        if(sum>target){
            endPtr--;
        }
        if(sum<target){
            beginPtr++;
        }
    }
    
    //indices are not 0 indexed so must add 1
    indices.push_back(beginPtr+1);
    indices.push_back(endPtr+1);
    return indices;
}


int main() {
    vector<int> numbers = {0,0,3,4};
    int target = 0;
    vector<int> answer = twoSum(numbers,target);
    for(int i=0; i<answer.size(); i++) {
        cout << "index " << answer[i] << "\n";
    }
}
