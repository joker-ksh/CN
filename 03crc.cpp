#include<bits/stdc++.h>
using namespace std;
int boolstringToInt(string s)
{
	int ans = 0;
	for(int i=0;i<s.length();i++)
	{
		ans = ans*2 + (s[i]-'0');
	}
	return ans;
}
string intToBoolstring(int n)
{
	string s = "";
	while(n)
	{
		s = char(n%2 + '0') + s;
		n/=2;
	}
	return s;
}
int main()
{
	string s = "1001";
	string divisor = "1011";
	int n = divisor.length()-1;
	string divident = s;
	for(int i=0;i<n;i++)
	{
		divident = divident + '0';
	}
	
	cout<<"Code: "<<divident<<endl;
	int dividentInt = boolstringToInt(divident);
	int divisorInt = boolstringToInt(divisor);
	int rem = dividentInt%divisorInt;
	string remStr = intToBoolstring(rem);
	cout<<"Remainder: "<<remStr<<endl;

	string received = "1000";
	string div = received;
	int k = remStr.length();
	for(int i=0;i<k;i++)
	{
		div = div + remStr[i];
	}
	cout<<"Div: "<<div<<endl;
	int divInt = boolstringToInt(div);
	int rem1 = divInt%divisorInt;
	if(rem1==0)
		cout<<"No error\n";
	else
		cout<<"Error\n";
	return 0;
}