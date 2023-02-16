#include "c:\Users\james\Desktop\migrate\std_lib_facilities.h"
//1 - capitalised cout
/*
int main()
{
	try {
		cout << "Success!\n"; //'cout' capitalised.
		keep_window_open();
		return 0;
	}

	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}

	catch (...) {
		cerr << "Oops! Unknown exception!\n";
		keep_window_open();
		return 2;
	}
}
*/ //1 - cout capitalised

//2 - missing terminating quotes
/*int main()
{
	try {
		cout << "Success!\n";
		keep_window_open();
		return 0;
	}

	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}

	catch (...) {
		cerr << "Oops! Unknown exception!\n";
		keep_window_open();
		return 2;
	}
}*/


//3 - missing beginning quote and terminating semicolon
/*int main()
{
	try {
		cout << "Success" << "!\n";
		keep_window_open();
		return 0;
	}

	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}

	catch (...) {
		cerr << "Oops! Unknown exception!\n";
		keep_window_open();
		return 2;
	}
}*/


//4 - no quotes, missing exclamation point.
/*int main()
{
	try {
		cout << "Success!" << '\n';
		keep_window_open();
		return 0;
	}

	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}

	catch (...) {
		cerr << "Oops! Unknown exception!\n";
		keep_window_open();
		return 2;
	}
}
*/


//5 - attempted string-to-int type conversion. 
/*int main()
{
	try {
		int res = 7;
		vector <int> v(10);
		v[0] = res;
		cout << "Success!\n";

		keep_window_open();
		return 0;
	}

	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}

	catch (...) {
		cerr << "Oops! Unknown exception!\n";
		keep_window_open();
		return 2;
	}
}
*/

//6 - //vector written as functions
/*
int main()
{
	try {
		vector <int> v(10);
		v[5] = 7;
		if (v[5] == 7) cout << "Success!\n";

		keep_window_open();
		return 0;
	}

	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}

	catch (...) {
		cerr << "Oops! Unknown exception!\n";
		keep_window_open();
		return 2;
	}
}
*/

//7 - undeclared var used for control flow.
/*
int main()
{
	try {
		if (true) cout << "Success!\n";
		else cout << "Fail!\n";
		keep_window_open();
		return 0;
	}

	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}

	catch (...) {
		cerr << "Oops! Unknown exception!\n";
		keep_window_open();
		return 2;
	}
}*/


//8 - bool misspelled...maybe?
/*int main()
{
	try {
		string s = "ape"; 
		bool c = "fool";
		if (c) cout << "Success!\n";
		keep_window_open();
		return 0;
	}

	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}

	catch (...) {
		cerr << "Oops! Unknown exception!\n";
		keep_window_open();
		return 2;
	}
}
*/

//10 - improper use of comparison operator.
/*
int main()
{
	try {
		string s = "ape"; if (s != "fool") cout << "Success!\n";
		keep_window_open();
		return 0;
	}

	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}

	catch (...) {
		cerr << "Oops! Unknown exception!\n";
		keep_window_open();
		return 2;
	}
}
*/


//11 - syntax, comparison
/*int main()
{
	try {
		string s = "ape"; if (s != "fool") cout << "Success!\n";
		keep_window_open();
		return 0;
	}

	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}

	catch (...) {
		cerr << "Oops! Unknown exception!\n";
		keep_window_open();
		return 2;
	}
}*/

//12 - bad concatenation
/*int main()
{
	try {
		string s = "ape"; 
		if (s + "fool" == "apefool")
			cout << "Success!\n";
		keep_window_open();
		return 0;
	}

	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}

	catch (...) {
		cerr << "Oops! Unknown exception!\n";
		keep_window_open();
		return 2;
	}
}*/

//13 - for loop is infinite

/*int main()
{
	try {
		vector<char> v(5);
		for (int i = 0; i < v.size(); ++i)
			cout << "Success!\n";
		keep_window_open();
		return 0;
	}

	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}

	catch (...) {
		cerr << "Oops! Unknown exception!\n";
		keep_window_open();
		return 2;
	}
}*/

//14 - improper indexing
/* int main()
{
	try {
		vector <char> v(5);
		for (int i = 1; i <= v.size(); ++i)
			cout << "Success!\n";
		keep_window_open();
		return 0;
	}

	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}

	catch (...) {
		cerr << "Oops! Unknown exception!\n";
		keep_window_open();
		return 2;
	}
}*/


//15 - bad indexing
/*int main()
{
	try {
		string s = "Success!\n";
		for (int i = 0; i < 9; ++i)
			cout << s[i];
		keep_window_open();
		return 0;
	}

	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}

	catch (...) {
		cerr << "Oops! Unknown exception!\n";
		keep_window_open();
		return 2;
	}
}*/

//16 - alien logical operator
/*int main()
{
	try {
		if (true) cout << "Success!\n";
		else cout << "Fail!\n";
		keep_window_open();
		return 0;
	}

	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}

	catch (...) {
		cerr << "Oops! Unknown exception!\n";
		keep_window_open();
		return 2;
	}
}*/


//17 - bad type conversion - 2000 overflows.
/*int main()
{
	try {
		int x = 2000;
		char c = x;
		if (c == char(2000))
			cout << "Success!\n";

		keep_window_open();
		return 0;
	}

	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}

	catch (...) {
		cerr << "Oops! Unknown exception!\n";
		keep_window_open();
		return 2;
	}
}*/

//18 - works fine.
/*int main()
{
	try {
		string s = "Success!\n";
		for (int i = 0; i < 10; ++i)
			cout << s[i];
		keep_window_open();
		return 0;
	}

	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}

	catch (...) {
		cerr << "Oops! Unknown exception!\n";
		keep_window_open();
		return 2;
	}
}*/

//19 - missing vector type
/*int main()
{
	try {
		vector <int> v(5);
		for (int i = 0; i < v.size(); ++i)
			cout << "Success!\n";
		keep_window_open();
		return 0;
	}

	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}

	catch (...) {
		cerr << "Oops! Unknown exception!\n";
		keep_window_open();
		return 2;
	}
}*/

//20 - var i would never exceed j, even without j++
/*int main()
{
	try {
		int i = 0;
		int j = 9;

		while (i < 10)
			++i;
		if (j < i)
			cout << "Success!\n";

		keep_window_open();
		return 0;
	}

	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}

	catch (...) {
		cerr << "Oops! Unknown exception!\n";
		keep_window_open();
		return 2;
	}
}*/

//21 - division by zero, sum of doubles and int
/*int main()
{
	try {
		double x = 2;
		double d = 5 / (x - 1);
		if (d == 2 * x + 1)
			cout << "Success!\n";
		keep_window_open();
		return 0;
	}

	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}

	catch (...) {
		cerr << "Oops! Unknown exception!\n";
		keep_window_open();
		return 2;
	}
}*/

//22 - using string like a vector is forbidden. Exceeding range is forbidden.
/*int main()
{
	try {
		string s = "Success!\n";
		for (int i = 0; i < 10; ++i)
			cout << s[i];
		keep_window_open();
		return 0;
	}

	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}

	catch (...) {
		cerr << "Oops! Unknown exception!\n";
		keep_window_open();
		return 2;
	}
}*/

//23 - incrementing undeclared var
/*int main()
{
	try {
		int i = 0;
		int j = 0;
		while (i < 10)
			++i;
		if (j < i)
			cout << "Success!\n";
		keep_window_open();
		return 0;
	}

	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}

	catch (...) {
		cerr << "Oops! Unknown exception!\n";
		keep_window_open();
		return 2;
	}
}*/

//24 - Missing equals sign for comparison.
/*int main()
{
	try {
		int x = 2;
		double d = 5 / (x - 1);
		if (d == 2 * x + 1)
			cout << "Success!\n";
		keep_window_open();
		return 0;
	}

	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}

	catch (...) {
		cerr << "Oops! Unknown exception!\n";
		keep_window_open();
		return 2;
	}
}*/

//25 - wrong operator for operation.
int main()
{
	try {
		cout << "Success!\n";
		keep_window_open();
		return 0;
	}

	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}

	catch (...) {
		cerr << "Oops! Unknown exception!\n";
		keep_window_open();
		return 2;
	}
}