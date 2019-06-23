#include<iostream>
#include<string>
#include<vector>
using namespace std;


/*
  ����ջsatckʵ�����ŵ����
*/
bool isValid(string s)
{
	int i;
	vector<char> stack;
	int top = -1; //ջ��ָ��
	for (i = 0; i < s.length(); i++)
	{
		if (s[i] == '(' || s[i] == '[' || s[i] == '{')
		{
			stack.push_back(s[i]);
			top++;
		}
		
		else  
		{
			//�ж�ջ�Ƿ�Ϊ��
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
	
	//ջ�Ƿ�Ϊ��
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