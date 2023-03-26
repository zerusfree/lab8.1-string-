#include <iostream>
#include <string>

using namespace std;

bool AvailableElements(const string str,const string cs1, const string cs2);
string Change(string& str,const string cs1, const string cs2);

int main()
{
	string str;
	string case1 = "AGA";
	string case2 = "OGO";

	cout << "Enter a sring: " << endl;
	getline(cin, str);
	
	if (AvailableElements(str,case1,case2))
	{
		cout << "There are \"AGA\" or \"OGO\" in string " << endl;
	}
	else
		cout << "No \"AGA\" or \"OGO\" in string " << endl;

	string dest = Change(str,case1,case2);
	
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	
	return 0;
}

bool AvailableElements(const string str, const string cs1, const string cs2)
{
	bool compare1 = true;
	bool compare2 = true;
	compare1 = compare1 && (str.find(cs1) != -1);
	compare2 = compare2 && (str.find(cs2) != -1);
	if (compare1 && compare2)
	{
		return true;
	}
	else 
		if (compare1 || compare2)
		{
			return true;
		}
		else 
			return false;
}

string Change(string& str, const string cs1, const string cs2)
{
	size_t pos1 = 0;
	while ((pos1 = str.find(cs1, pos1)) != -1)
		str.replace(pos1, 3, "**");
	size_t pos2 = 0;
	while ((pos2 = str.find(cs2, pos2)) != -1)
		str.replace(pos2, 3, "**");
	return str;
}