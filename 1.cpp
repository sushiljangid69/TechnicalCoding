#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter string\t";
    cin>>s;
    vector<int> dict(256,-1);
    int maxLen = 0,start = -1;
    for(int i=0;i<s.size();i++){
        if(dict[s[i]] > start){
            start = dict[s[i]];
        }
        dict[s[i]] = i;
        maxLen = max(maxLen,i-start);
    }
    cout<<"Maximum Lenght = "<<maxLen;
    return 0;
}