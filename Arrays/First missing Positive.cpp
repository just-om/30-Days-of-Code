//Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        sort(arr,arr+n);
        
        if(n==1){
            return 1;
        }
        int ans=0;
        int flag=0;
        
        
        
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                flag=1;
            }
            
            if(flag==1 and arr[i]>1 ){
                return 1;
            }
            
            if(arr[i]>=0){
                ans=arr[i];
                break;
            }
        }
        
        for(int i=0;i<n;i++){
            
            if(arr[i]==ans){
                ans++;
            }
        }
        
        return ans;
    } 
