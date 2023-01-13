char nonrepeatingCharacter(string S)
    {
       //Your code here
       const int CHAR = 256;
       int freq[CHAR];
       fill(freq,freq+CHAR,-1);
       for(int i=0;i<S.length();i++){
           if(freq[S[i]]==-1){
               freq[S[i]]=i;
           }
           else{
               freq[S[i]]=-2;
           }
       }
       int res = INT_MAX;
       for(int i=0;i<CHAR;i++){
           if(freq[i]>=0){
               res=min(res,freq[i]);
           }
          
       }
       if(res==INT_MAX){
           return '$';
       }
       else{
           return S[res];
       }
    }
