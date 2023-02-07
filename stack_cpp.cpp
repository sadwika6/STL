#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int>st;
	st.push(10);
	st.push(20);
	cout<<st.top()<<endl;
	st.pop();
	cout<<st.empty()<<endl;//-->check if the stack is empty or not-->true/false-->0/1
	cout<<st.size()<<endl;
	
}