 vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
        map<int,int> mp;
	int c=0;
    vector<int> ans;
	for(int i=0;i<k;i++){

		mp[A[i]]++;

	}
	
	
	ans.push_back(mp.size());
	
	
	int j=k, i=0;
	while(j<=n-1){
	    
	    if(mp[A[i]]==1){
	        mp.erase(A[i]);
	        i++;
	    }
	    else{
	        mp[A[i]]--;
	        i++;
	    }
	   // mp.insert({j,A[j]});
	   
	   mp[A[j]]++;
	   
	    j++;
	    
	    ans.push_back(mp.size());
	    
	}
       
       
       
        
	

	return ans;
    }
