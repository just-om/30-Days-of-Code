
/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  string s;
  int cnt=1;
  for(int i=1; i<src.size() ;i++){
      
      if(src[i]==src[i-1]){
          cnt++;
      }
      else {
          s+=src[i-1];
          s+=to_string(cnt);
          cnt=1;
      }
      
  }
  
  s+=src[src.size()-1]+to_string(cnt);
  
  
  
  return s;
}     
 
