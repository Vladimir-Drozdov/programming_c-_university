
#include <iostream>
#include <string>
using namespace std;
int main()
{
	
	system("chcp 1251 >> null");

	string s;
	cin >> s;
	
	for (int i = 0; i < s.size(); i++) {
		if (s[i]!= 'н' && s[i] != 'о' && s[i] != 'п' && s[i] != 'э' && s[i] != 'ю' && s[i] != 'я'&& s[i] != 'Э' && s[i] != 'Ю' && s[i] != 'Я') {
			s[i] = char(int(s[i]) + 3);
		}
		if (s[i] == 'н') {
			s[i] = 'р';
		}
		if (s[i] == 'о') {
			s[i] = 'с';
		}
		if (s[i] == 'п') {
			s[i] = 'т';
		}
		if (s[i] == 'э') {
			s[i] = 'а';
		}
		if (s[i] == 'ю') {
			s[i] = 'б';
		}
		if (s[i] == 'я') {
			s[i] = 'в';
		}
		if (s[i] == 'Э') {
			s[i] = 'А';
		}
		if (s[i] == 'Ю') {
			s[i] = 'Б';
		}
		if (s[i] == 'Я') {
			s[i] = 'В';
		}
	
			
	}
	cout << s;
}



