// Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        
        if(n==1) return 1;
        
        int t=0;
        
        for(int i=0;i<n;i++){
            
            t+=a[i];
            
        }
        
        int l=0,r=0;
        
        for(int i=1;i<n;i++){
            l+=a[i-1];
            r=t-l-a[i];
            
            if(l==r){
                return i+1;
            }
            
        }
        return -1;
    }
