#include<iostream>
using namespace std;
int main(){
    int t,x,y,ans;
    cin>>t;
    while(t--){
        cin>>x>>y;
        if(y%x == 0){
            ans  = (y/x)-1;
        }
        else{
            ans = y/x;
        }
        cout<<ans<<endl;
        }
        return 0;
}