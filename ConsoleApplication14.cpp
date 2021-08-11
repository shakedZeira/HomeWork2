#include <iostream>
#include <string.h> //   <-- fix the bug please.
#include <iostream>
using std::string;
using std::cout;
using std::endl;
using namespace std;


void bonus(const char* str, int size);

int main() {
	string mag = "\t      Magshimim";
	string* hw2 = new string("HomeWork 2 - std::string");
	string moto("Practice Makes Perfect!");
	string asterisk("**************************************************");
	string input1, input2; // we will use those strings for task 4

	cout << mag << endl;
	cout << *hw2 << " - " << moto << endl;
	cout << asterisk << endl << endl << endl;

	/* 1.fix the fllowing commands: */
	cout << "The length of moto is " << size(moto) /*replace 0 with your code */ << " chars." << endl;
	cout << "The length of hw2 is " << size(*hw2) /*replace 0 with your code */ << " chars." << endl;
	cout << "asterisk contains " << size(asterisk) /*replace 0 with your code */ << " asterisks." << endl << endl << endl;

	/*2.for the following commands use two diffrent methods: */
	cout << "The 16th char in moto is " << moto[15] /*replace 0 with your code */ << endl;
	cout << "The 14th char in mag is " << mag[13]/*replace 0 with your code */ << endl;
	cout << "The 1st char in hw2 is " << hw2[0]/*replace 0 with your code */ << endl;
	cout << "The last char in moto is " << moto[size(moto) - 1]/*replace 0 with your code */ << endl << endl << endl;

	/*Try print the 19th char in mag in each of the two methods and compare the results- no need to add it here. */

	/*3.fix the fllowing commands: */
	cout << "The first occurrence of the char 'c' in moto is at index " << moto.find_first_of("c") /*replace 0 with your code */ << endl;
	cout << "The last occurrence of the char 'c' in moto is at index " << moto.find_last_of("c")/*replace 0 with your code */ << endl;
	cout << "The first occurrence of the substring 'Work' in hw2 starts at index " << moto.find("work") /*replace 0 with your code */ << endl << endl << endl;

	/*4.compare two user inputs: */
	cout << "Please enter a string: ";
	/*use >> operator for getting inputs from stdin(cin) */
	cin >> input1;
	cout << endl;
	//cout << "are input1 and input2 equal? " << 0/*replace 0 with your code */ << endl << endl << endl;
	cout << "Please enter a string: ";
	cin >> input2;
	cout << endl;
	if (input1.compare(input2) == 0)
	{
		cout << "equal" << endl;
	}
	else
	{
		cout << "Not equal!" << endl;
	}

	/*5. Bonus: use the function 'bonus' with the right parameters: */
	/* your code goes here..*/

	system("pause");

	delete hw2;
	return 0;
}

void bonus(const char* str, int size) {
	/* A secret message that you should decrypt ,what could the key possibly be? */
	char secret[49] = { '|','O','X','S',0x0A,'M','E','E','N',0x0B,0x0A,'s','E','_',0x0A,'B','K'\
						  ,'\\','O',0x0A,'N','O','I','X','S','Z','^','O','N',0x0A,'^','B','O'\
						  ,0x0A,'Y','O','I','X','O','^',0x0A,'G','O','Y','Y','K','M','O',0x0B };

	char* ans = new char[size];
	int i = 0;

	while (i < size) {
		ans[i] = str[i] ^ secret[i];
		i++;
	}

	cout << string(ans, size - 1) << endl << endl;

	delete[] ans;
}