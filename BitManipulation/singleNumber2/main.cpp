int Solution::singleNumber(const vector<int> &A) {
	if(A.size()==0)return 0;
	if(A.size()==1)return A[0];
	int num=0;
	vector<int>bitcount(32,0);
  	for(int i=0;i<A.size();i++){
    		for(int j=0;j<32;j++){
        		if(A[i]&(1<<j)){
            			bitcount[j]++;
        		}
    		}    
  	}
  	for(int i=0;i<32;i++){
        	bitcount[i]=bitcount[i]%3;
        	if(bitcount[i]==1){
            	num+=pow(2,i);
        }
    }
   
   return num;
}

