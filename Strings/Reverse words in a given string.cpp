 //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
       // reverse(S.begin(),S.end());
     
        int i=0,j=0;
        vector<string> ans;
        string str="";
        
        for(int i=0;i<S.length();i++){
            
            if(S[i]=='.'){
                ans.push_back(str);
                str="";
            }
            else{
                str+=S[i];
            }
        }
        
        ans.push_back(str);
        
        string a="";
        
        for(int i=ans.size()-1; i>0 ;i--){
            
            a+=ans[i];
            a+=".";
        }
        
        a+=ans[0];
        
        return a;
    } 
