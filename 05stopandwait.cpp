#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the number of frames:"<<endl;
    int frames;
    cin>>frames;
    cout<<"Enter the nth frame lost:"<<endl;
    int lost;
    cin>>lost;
    cout<<"Enter the window size:"<<endl;
    int win;
    cin>>win;
    int f = 1;
    int count = 0;
    vector<int>ans;
    while(f<=frames){
        count++;
        ans.push_back(f);
        if(count==lost){
            count=1;
            ans.push_back(f);
        }
        f++;
    }
    for(auto it:ans) cout<<it<<" ";
    cout<<endl;
    return 0;
}



