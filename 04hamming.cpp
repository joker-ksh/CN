#include<bits/stdc++.h>
using namespace std;
int main(){
    string input;
    cin>>input;
    int m = input.length();
    int p = 0;
    while(pow(2,p)<p+m+1) p++;
    int size = m+p;
    char arr[size+1];
    int k = m;
    int x = 0;
    for(int i = 1;i<=size;i++){
        if(pow(2,x)!=i){
            arr[i]=input[--k];
        }
        else{
            x++;
        }
    }
    x=0;
    for(int i = 1;i<=size;i++){
        if(pow(2,x)==i){
            x++;
            int par = 0;
            for(int j = i;j<=size;j+=2*i){
                for(int k = j;k<j+i && k<=size;k++){
                    if(k!=i){
                        if(arr[k]=='1') par++;
                    }
                }
            }
            if(par%2==0) arr[i]='0';
            else arr[i]='1';
        }
    }
    cout<<"Hamming Code:";
    for(int i = size;i>0;i--) cout<<arr[i];
    cout<<endl;
    string r;
    cin>>r;
    char arr1[size+1];
    k=r.length();
    for(int i = 1;i<=size;i++){
        arr1[i]=r[--k];
    }
    x=0;
    bool ans = true;
    string aa = "";
    for(int i = 1;i<=size;i++){
        if(pow(2,x)==i){
            x++;
            int par = 0;
            for(int j = i;j<=size;j+=2*i){
                for(int k = j;k<j+i && k<=size;k++){
                    if(arr1[k]=='1') par++;
                }
            }
            if(par%2!=0){
                ans=false;
                aa+='1';
            }
            else{
                aa+='0';
            }
        }
    }
    if(ans){
        cout<<"no error"<<endl;
    }
    else{
        cout<<"error at:"<<endl;
        int a = 0;
        for(int i = 0;i<aa.size();i++){
            if(aa[i]=='1'){
                a+=pow(2,i);
            }
        }
        cout<<a<<endl;
    }
    return 0;
}
