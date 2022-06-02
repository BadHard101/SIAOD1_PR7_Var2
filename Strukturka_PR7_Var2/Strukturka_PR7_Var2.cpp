#include <iostream>
#include <string>
#include "MyMass.h"
#include "MyStack.h"

void clean() {
	while (fgetc(stdin) != '\n');
}

int main()
{
	int menu;
	MyMass m1;
	MyStack m2;
	cout << "What do you want to use?\n" << "1 - Use array\n"<< "2 - Use singly-directed list\n" << "3 - Task #2\n" << "Enter: ";
	cin >> menu;
	switch (menu)
	{
	case 1:
		menu = -1;
		while (menu != 0)
		{
			cout << "What to do?\n"
				<< "1 - push element\n"
				<< "2 - pop element\n"
				<< "3 - top element\n"
				<< "4 - clear stack\n"
				<< "5 - is the stack empty?\n"
				<< "Enter: ";
			cin >> menu;
			switch (menu)
			{
			case 1:
				if (m1.get_i() == 19)
					cout << "Stack is full!" << endl << endl;
				else
				{
					int push;
					cout << "What to push? ";
					cin >> push;
					m1.push(push);
					cout << "Pushed successfully!" << endl << endl;
				}
				break;
			case 2:
				if (m1.get_i() != -1)
					cout << "Poped element: " << m1.pop() << endl << endl;
				else
					cout << "Nothing to pop!" << endl << endl;
				break;
			case 3:
				if (m1.get_i() == -1)
					cout << "Stack is empty!" << endl << endl;
				else
					cout << "Element on the top: " << m1.top() << endl << endl;
				break;
			case 4:
				m1.clear();
				cout << "Cleared..." << endl << endl;
				break;
			case 5:
				if (m1.empty())
					cout << "Stack is empty!" << endl << endl;
				else
					cout << "Stack isn't empty!" << endl << endl;
				break;
			default:
				break;
			}
		}
		break;
	case 2:
		menu = -1;
		while (menu != 0)
		{
			cout << "What to do?\n"
				<< "1 - push element\n"
				<< "2 - pop element\n"
				<< "3 - top element\n"
				<< "4 - clear stack\n"
				<< "5 - is the stack empty?\n"
				<< "Enter: ";
			cin >> menu;
			switch (menu)
			{
			case 1:
				int push;
				cout << "What to push? ";
				cin >> push;
				m2.push(push);
				cout << "Pushed successfully!" << endl << endl;
				break;
			case 2:
				if (m2.empty())
					cout << "Nothing to pop!" << endl << endl;
				else
					cout << "Poped element: " << m2.pop() << endl << endl;
				break;
			case 3:
				if (m2.empty())
					cout << "Stack is empty!" << endl << endl;
				else
					cout << "Element on the top: " << m2.top() << endl << endl;
				break;
			case 4:
				m2.clear();
				cout << "Cleared..." << endl << endl;
				break;
			case 5:
				if (m2.empty())
					cout << "Stack is empty!" << endl << endl;
				else
					cout << "Stack isn't empty!" << endl << endl;
				break;
			default:
				break;
			}
		}
		break;
	case 3:
		clean();
		string s;
		MyStack stek;
		cout << "Enter the expression: ";
		getline(cin, s);
		cout << "Bracket positions: ";
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '(')
				stek.push(i + 1);
			else if (s[i] == ')')
				cout << stek.pop() << " " << i + 1 << "; ";
		}
		break;
	}
}