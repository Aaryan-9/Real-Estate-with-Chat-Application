#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int aag=0;
        int ans=0;
        for(int i=0;i<s.size()-1;i++){
            if((aag==0)&&s[i]=='0'&&s[i+1]=='1'){
                aag=1;
                continue;
            }
            if(s[i]!=s[i+1]){
                ans++;
            }
        }
        ans++;
        cout<<ans<<endl;
    }
    return 0;
}