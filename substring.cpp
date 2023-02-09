#include <iostream>
using namespace std;
int main()
{
	int temp=0;
	char str[100], substr[50];

	cout << "Enter string: "; cin >> str;
	cout << "Enter substring: "; cin >> substr;

	for (int i = 0; i != '\0'; i++)
	{
		int j = 0;
		if (str[i] == substr[j])
		{
			temp = i + 1;
			while (str[i] == substr[j])
			{
				i++;
				j++;
			}
			if (substr[j] == '\0')
			{
				cout << "The substring is present int string." << endl;
			}
		}
		else
		{
			i = temp;
			temp = 0;
		}

	}
	if (temp==0)
	{
		cout << "substring not found in the string." << endl;
	}
	return 0;
}
