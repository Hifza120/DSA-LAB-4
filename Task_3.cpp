#include"MyStack.h"
#include<string>
bool is_balanced(const string& expression) {
	MyStack<char>  S(6);
	for (int i = 0; i < expression.length(); i++) {
		if (expression[i] == '(' || expression[i] == '[' || expression[i] == '{')
		{
			S.push(expression[i]);

		}
		else if (expression[i] == ')' || expression[i] == ']' || expression[i] == '}') {
			if (S.isEmpty()) {
				return false;
			}
			char topchar = S.pop();
			if ((topchar != '(' && expression[i] == ')') ||
				(topchar != '{' && expression[i] == '}') ||
				(topchar != '[' && expression[i] == ']')
				)
			{
				return false;
			}


		}

	}
	return S.isEmpty();
}

int main() {
	string S;
	cout << "Enter Line : " << endl;
	getline(cin,S);
	if (is_balanced(S)) {
		cout << "Equation is balance " << endl;
	}
	else {
		cout << "Equation is Not balance " << endl;
	}


	return 0;
}