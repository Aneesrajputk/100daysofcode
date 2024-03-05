class Solution {
public:
    bool isAnagram(string s, string t) {
    int frequencytable[256]={0};
    for(int i=0;i<s.size();i++){
        frequencytable[s[i]]++;

    }
     for(int i=0;i<t.size();i++){
        frequencytable[t[i]]--;
        
    }
     for(int i=0;i<256;i++){
        if(frequencytable[i]!=0){
            return false;
        }
     }
     return true ;
    }
};