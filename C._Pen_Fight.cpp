#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        vector<int>sc,sp,result;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int scr;
            cin>>scr;
            sc.push_back(scr);
            sp.push_back(1);
            result.push_back(i+1);
        }
        int q;
        cin>>q;
        for(int i=0;i<q;i++){
            int q_v,x,y;
            cin>>q_v;
            if(q_v==1){
                cin>>x>>y;
                if(sc[x-1]>sc[y-1]){
                    sc[x-1]=sc[x-1]+sc[y-1];
                    sc[x-1]=0;
                    sp[x-1]=sp[x-1]+sp[y-1];
                    sp[y-1]=0;
                    result[y-1]=result[x-1];
                }
                else if((sc[x-1]==sc[y-1])||(sp[x-1]==0)||(sp[y-1]==0)){
                    continue;
                }
                else if(sc[x-1]<sc[y-1]){
                    sc[y-1]=sc[x-1]+sc[y-1];
                    sc[y-1]=0;
                    sp[y-1]=sp[y-1]+sp[x-1];
                    sp[x-1]=0;
                    result[x-1]=result[y-1];
                }
            }
            else if(q_v==2){
                cin>>x;
                cout<<sp[x-1]<<endl;
            }
            else if(q_v==3){
                cin>>x;
                cout<<result[x-1]<<endl;
            }
        }
    }
    return 0;
}
