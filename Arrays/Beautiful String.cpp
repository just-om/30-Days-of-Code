int makeBeautiful(string str) {
	// Write your code here
	int cnt=0;
	int n=str.size();
	for(int i=0;i<n-1;i++){
		if(str[i]=='0' && str[i+1]=='0'){
			cnt++;
			str[i+1]='1';
		}
		else if(str[i]=='1' && str[i+1]=='1'){
			str[i+1]='0';
			cnt++;
		}
	}

	if(cnt>n/2){
		return abs(cnt-n);
	}
	else{
		return cnt;
	}

}
