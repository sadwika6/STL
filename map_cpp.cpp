#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
	map<int,int>mp;//map->dictionary
	int A[10]={8,3,5,5,1,6,2,1,9,2};
	for(int i=0;i<10;i++)
	{
		mp[A[i]]++;
	}
	for(auto it:mp)
	{
		cout<<it.first<<"-->"<<it.second<<endl;
	}
	map<char,string>mpp;
	for(int i=0;i<2;i++)
	{
		char c;
		string s;
		cin >> c >> s;
		mpp.insert(make_pair(c,s));
	}
	for(auto it:mpp)
	{
		cout<<it.first<<"-->"<<it.second<<endl;

	}
}