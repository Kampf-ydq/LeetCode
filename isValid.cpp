#include<iostream>
#include<string>
#include<vector>
using namespace std;


/*
  利用栈satck实现括号的配对
*/
bool isValid(string s)
{
	int i;
	vector<char> stack;
	int top = -1; //栈顶指针
	for (i = 0; i < s.length(); i++)
	{
		if (s[i] == '(' || s[i] == '[' || s[i] == '{')
		{
			stack.push_back(s[i]);
			top++;
		}
		
		else  
		{
			//判断栈是否为空
			if (top == -1)
			{
				return false;
			}
			if (s[i] == ')')
			{
				if (stack[top] == '(')
				{
					stack.pop_back();
					top--;
				}
				else
				{
					return false;
				}
			}
			if (s[i] == ']')
			{
				if (stack[top] == '[')
				{
					stack.pop_back();
					top--;
				}
				else
				{
					return false;
				}
			}
			if (s[i] == '}')
			{
				if (stack[top] == '{')
				{
					stack.pop_back();
					top--;
				}
				else
				{
					return false;
				}
			}
			
		}
	}
	
	//栈是否为空
	if (top != -1)
	{
		return false;
	}
	return true;
}

int main()
{
	string str = "{}([])[]";
	if (isValid(str))
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}

	return 0;
	
}