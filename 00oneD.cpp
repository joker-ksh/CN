#include<bits/stdc++.h>
using namespace std;
int Parity(string s)
{
    int count = 0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == '1')
            count++;
    }
    if(count%2 == 0)
        return 0;
    else
        return 1;
}

string endcode(string msg)
{
    string encode = "";
    int count = 0;
    int parity = Parity(msg);
    encode = msg + char(parity);
    return encode;
}
int main()
{
    string msg = "010100101";
    cout<<"Encoded message is: "<<endcode(msg)<<endl;
    
    string received = "0101001010";
    int par = Parity(received);
    if(par%2==0)
        cout<<"Got correct msg";
    else 
        cout<<"Attenuated msg";
    return 0;
}

