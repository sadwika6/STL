#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int>ls;
	ls.push_back(10);
	ls.push_front(20);
    ls.push_front(30);
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
    cout<<endl;
    auto y=ls.begin();
    ls.erase(y);
    for(auto x:ls){
    	cout<<x<<" ";
    }
}