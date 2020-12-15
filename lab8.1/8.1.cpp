//string спосіб
#include <iostream>
#include <string>
using namespace std;

int count(string charSequence, string abc)
{
	int counter = 0;
	for (int i = 1; i < charSequence.length(); i++)
	{
		if (abc.find(charSequence[i]) != string::npos &&
			abc.find(charSequence[i - 1]) != string::npos &&
			abc.find(charSequence[i + 1]) != string::npos)
		{
			counter++;
		}
	}
	return counter;
}

string modifying (string charSequence, string abc)
{
	for (int i = 1; i < charSequence.length(); i++)
	{
		if (abc.find(charSequence[i]) != string::npos &&
			abc.find(charSequence[i - 1]) != string::npos &&
			abc.find(charSequence[i + 1]) != string::npos)
		{
			charSequence[i] = '*';
			charSequence[i - 1] = '*';
			charSequence[i + 1] = '*';
		}
	}
	return charSequence;
}
int main()
{
	string charSequence;
	cout << "Enter string:" << endl;
	getline(cin, charSequence);
	string abc = "abc";
	cout << "Number of letter combinations: " << count(charSequence, abc)<<endl;
	cout << "Modified string: " << modifying(charSequence, abc); 
	return 0;
}