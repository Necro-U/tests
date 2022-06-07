#include<iostream>

using namespace std;

    int lengthOfLongestSubstring(string s) {
        long hash_tab[127];
        long partial_sub =0;
        long max_sub =0;
        long walker =0;
        long i =0;
        while(walker< s.size()){
            partial_sub = 1;
            i=walker+1;
            hash_tab[s[walker]-'\0']=1;
            while(i<s.size() and s[walker]!=s[i] and hash_tab[s[i]-'\0']!=1){
                hash_tab[s[i]-'\0']=1;
                partial_sub++;
                i++;
            }
            for(int j = 0 ; j< 127 ; j++){
                hash_tab[j]=0;
            }
            if(max_sub < partial_sub){
                max_sub=partial_sub;
            }
            walker ++;
        }
        
        return max_sub;
        
    }
