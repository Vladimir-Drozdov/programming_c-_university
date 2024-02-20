

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	
	for (int i = 0; i < s.size(); i++) {
		if (int(s[i]) <= 122 && int(s[i]) >= 97) {
			cout << s[i];
		}
	}
}


