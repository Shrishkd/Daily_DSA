#include <bits/stdc++.h> 
using namespace std;

void InsertSorted(stack<int> &stack, int num){

	if(stack.empty() || !stack.empty() && stack.top()<num){
		stack.push(num);
		return;
	}

	int n = stack.top();
	stack.pop();

	InsertSorted(stack, num);

	stack.push(n);

	
}

void sortStack(stack<int> &stack)
{
	if(stack.empty()){
		return;
	}

	int top = stack.top();

	stack.pop();

	sortStack(stack);

	InsertSorted(stack, top);


}