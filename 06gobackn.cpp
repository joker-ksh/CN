#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the number of frames to be sent:"<<endl;
    int frames;cin>>frames;
    cout<<"Enter the nth frame lost:"<<endl;
    int lost;cin>>lost;
    cout<<"Enter the window size:"<<endl;
    int win;cin>>win;
    int f = 1;
    int count = 0;
    vector<int>ans(0,1000);
    while(f<=frames){
        ans.push_back(f);
        count++;
        if(count==lost){
            count=0;
            for(int j=f+1;j<f+win && j<=frames;j++){
                ans.push_back(j);
                count++;
            }
        }
        else{
            f++;
        }
    }
    for(auto it:ans) cout<<it<<" ";
    return 0;
}
