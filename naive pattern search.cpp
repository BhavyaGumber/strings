#include <iostream>

using namespace std;
void patSearch(string &txt, string &patt){
    int n=txt.length();
    int j=0;
    int m = patt.length();
    for(int i=0;i<=n-m;i++){
        for( j=0;j<m;j++){
            if(patt[j]!=txt[i+j]){
                break;
            }
            
        }
        if(j==m){
                cout<<i<<" ";
            }
    }
    
}

int main()
{
    string txt = "abcdef";
    string patt = "def";
    patSearch(txt,patt);

    return 0;
}
