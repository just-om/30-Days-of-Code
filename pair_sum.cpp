 
        sort(arr,arr+n);
        int i=0;
        int j=n-1;
        int c=0;
        
        
        
        while(i<j){
            if(arr[i]+arr[j] ==k){
                c++;
                int m=i+1;
                while(m<j && (arr[m]+arr[j]) == k){ // do it for all the same i values eg 1 1 5 7, here 1+7=8 also 1+7 =8 2 pairs so while loop.                    c++;
                    m++;
                }
                j--;
                
            }
            
            else if(arr[i]+arr[j] < k){
                i++;
            }else if(arr[i]+arr[j] > k){
                j--;
            }
            
        }
        
        return c;
