#include<iostream>
#include<iterator>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
int main()
{
	vector<int>A;
	A.push_back(10);
	A.emplace_back(20);
	A.push_back(30);
	A.push_back(50);
	//insert an element
	auto it =A.begin()+3;
	A.insert(it,40);
	for(auto x:A)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	//delete data
	//A.pop_back();
	for(auto x:A)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	auto it1=A.begin()+2;
	A.erase(it1);
	for(auto x:A)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	//find the element
	auto y=find(A.begin(),A.end(),20);
	int ind=y-A.begin();
	bool z=binary_search(A.begin(),A.end(),40);
	cout<<z<<endl;
	if(y!=A.end())cout<<"Yes\n";
	else cout<<"No\n";
	cout<<ind<<endl;
	A.push_back(50);
	A.push_back(60);
	auto lb=lower_bound(A.begin(),A.end(),50);
	auto ub=upper_bound(A.begin(),A.end(),50);
	cout<<*lb<<" "<<*(ub-1)<<endl;
	//list
	list<int>ls;
	ls.push_back(10);
	ls.push_back(20);
    ls.push_back(30);
    ls.push_back(40);
    for(auto x:ls){
    	cout<<x<<" ";
    }
    cout<<endl;
    auto a=ls.begin();
    a++;
    a++;
    a++;
    ls.insert(a,100);
    for(auto x:ls){
    	cout<<x<<" ";
    }
}