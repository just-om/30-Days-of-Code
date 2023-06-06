
    int c=0;
    int n=pattern.size();
   int flag=0;
   for(int i=0;i<n;i++){

       if(pattern[i]=='('){
           c++;
           flag++;
       }
       else if(pattern[i]==')'){
           
           if(flag>=1){
               c--;
               flag--;
           }
           else{
               c++;
           }

       }

   }

    return c;
