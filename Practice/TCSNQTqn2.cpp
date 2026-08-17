/*
Problem: Sum of Elements Occurring Exactly Twice

Given an array containing integers, floating-point numbers, and negative numbers, find all elements that occur exactly two times in the array.

An element that occurs exactly two times is considered a pair.

Return the sum of all such elements as a floating-point value.

Input Format

The user provides the array elements as space-separated values.

The size of the array is not provided separately.

Output Format

Print the sum of all elements that occur exactly twice.

The output should be a floating-point number.
*/
#include<bits/stdc++.h>
using namespace std;


// double solution(vector<double>& arr) {

//     sort(arr.begin(), arr.end());

//     double sum = 0.0;

//     int n = arr.size();

//     for(int i = 0; i < n; ) {

//         int j = i + 1;

//         while(j < n && arr[j] == arr[i]) {
//             j++;
//         }

//         int frequency = j - i;

//         if(frequency == 2) {
//             sum += arr[i];
//         }

//         i = j;
//     }

//     return sum;
// }


double solution(vector<double>& arr){

    unordered_map<double, int> mp;

    for(int freq : arr){
        mp[freq]++;
    }

    double sum = 0.0;

    for(auto&pair : mp){
        if(pair.second == 2){
            sum+=pair.first;
        }
    }
    return sum;
}

int main(){

    string line;

    getline(cin , line);

    stringstream ss(line);

    vector<double> arr;
    double x;

    while(ss >> x){
        arr.push_back(x);
    }

    cout<<solution(arr);

    return 0;
}