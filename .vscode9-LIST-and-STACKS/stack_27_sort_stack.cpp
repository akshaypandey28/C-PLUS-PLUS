#include <bits/stdc++.h> 
using namespace std;
/* https://www.codingninjas.com/studio/problems/sort-a-stack_985275?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTabValue=PROBLEM */
void insertEle(stack<int> &st,int temp){
	if(st.size()==0 || st.top() <= temp){
		st.push(temp);
		return ;
	}
	int val=st.top();
	st.pop();
	insertEle(st, temp);
	st.push(val);
}
void sortStack(stack<int> &st)
{
	// Write your code here
	if(st.size()==1) return ;
	int temp=st.top();
	st.pop();
	sortStack(st);
	insertEle(st, temp);
}
int main(){
    return 0;
}