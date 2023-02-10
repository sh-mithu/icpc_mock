#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,i=1;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(b*c<=a){
            cout<<"Case "<<": Yes"<<endl;
        }
        else{
            cout<<"Case "<<": No"<<endl;
        }
        i++;
    }
    return 0;
}
