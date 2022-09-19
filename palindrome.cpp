class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int start =0;
	    int end = S.size()-1;
	   for(start = 0; start<=end; start++, end--){
	       if(S[start]!=S[end]){
	        return 0;
	         
	       }
	   }
	   return 1;
	   
	  
	   
	       
	   
	}

};
