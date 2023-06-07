#include <bits/stdc++.h> 
bool isSubSequence(string A, string B) {
    // Write your code here.

    int j=0;
       for(int i=0;i<B.length();i++){
           if(B[i]==A[j]){
               j++;
           }
       }
       if(A.length()==j){
           return 1;
       }
       return 0;
   

}
