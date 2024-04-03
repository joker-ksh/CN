#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the number of frames to be sent:"<<endl;
    int frames;cin>>frames;
    cout<<"Enter the nth frame that is lost:"<<endl;
    int lost;cin>>lost;
    cout<<"Enter the window size:"<<endl;
    int win;cin>>win;
    int f = 1;
    int count = 0;
    vector<int>ans;
    while(f<=frames){
        ans.push_back(f);
        count++;
        if(count==lost){
            count=0;
            int j = 0;
            for(j=f+1;j<f+win && j<=frames;j++){
                ans.push_back(j);
                count++;
            }
            ans.push_back(f);
            count++;
            f=j;
        }
        else{
            f++;
        }
    }
    for(auto it:ans) cout<<it<<" ";
}