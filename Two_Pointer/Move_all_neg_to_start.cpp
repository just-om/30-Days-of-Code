#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &arr){
    // Write your code here.


int start=0;

    for(int i=0;i<arr.size();i++){

        if(arr[i]<0){
            swap(arr[i],arr[start]);
            start++;
        }

    }

return arr;
