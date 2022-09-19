class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
    unordered_map<char,int> mp;
    if(a.length()!=b.length())return false;
    
    for(int i=0;i<a.length();i++){
        mp[a[i]]++;
    }
    for(int i=0;i<b.length();i++){
        if(mp.find(b[i])!=mp.end()){
            mp[b[i]]--;
        }
        else{
            return false;
        }
    }
    for(auto it:mp){
        if(it.second!=0)return false;
    }
            return true;
        
    }
        
    

};
