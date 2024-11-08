#include <iostream>
using namespace std;
int main()
{
	float num1, num2;
	char operation;
	cout << "$$chez kate calculator$$"<< endl;
	cin >> num1 >> operation >>num2;
	switch(operation)
	{
		case '-':cout << num1 << operation << num2 << "=" << num1 - num2; break;
    case '+':cout << num1 << operation << num2 << "=" << num1 + num2; break;
				case '*':cout << num1 << operation << num2 << "=" << num1 * num2; break;
		case '/':cout << num1 << operation << num2 << "=" << num1 / num2; break;
		case '%':
			bool Num1Int , Num2Int;
	Num1Int=((int)num1 == 1);//5==5.0
				Num2Int=((int)num2 == 2);
				if(Num1Int && Num2Int)
				cout << num1 << operation << num2 << "=" << (int)num1 % (int)num2;
				else
				cout <<"Not valid";
				break;
				default:cout <<"cannot exist since no valid operation mentioned " << endl;
			}

				   system("pause>0");
}

