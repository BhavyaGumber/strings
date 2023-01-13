int repeatedCharacter (string s) 
    { 
        //Your code here
       const int CHAR = 256;
       bool visited[CHAR];
       fill(visited,visited+CHAR, false);
       int res = -1;
       for(int i=s.length()-1;i>=0;i--){
           if(visited[s[i]]){
               res=i;
           }
           else{
               visited[s[i]]=true;
           }
       }
       return res;
        
        
        
    } 
