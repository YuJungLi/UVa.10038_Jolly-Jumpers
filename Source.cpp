#include <iostream>
#pragma warning( disable : 4996 )
using namespace std;

int main()
{
	freopen("Input.txt", "rt", stdin);
	freopen("Output.txt", "w+t", stdout);
	int n;
	while (cin>>n)
	{
		bool flag = 0, check[3000] = { 0 };
		int num[3000];
		for (int i = 0; i < n; i++)
			cin >> num[i];
		for (int i = 0; i < n - 1; i++)
			if (abs(num[i] - num[i + 1]) == 0 || abs(num[i] - num[i + 1]) >= n)
			{
				flag = 1;
				break;
			}
			else
				check[abs(num[i] - num[i + 1])] = 1;
		for (int i = 1; i < n; i++)
			if (!check[i])
				flag = 1;
		if (flag)
			cout << "Not jolly" << endl;
		else
			cout << "Jolly" << endl;
	}
	return 0;
}