
#include <iostream>
#include "TestHeader2.h"
#include "GitHub.h"

// CppApp.cpp : Defines the entry point for the console application.
//

using namespace std;

int main()
{
	cout << "testing ..." << endl;

	cout << "[" << CommitCount << "]" << endl;
	cout << "[" << LastCommitHash << "]" << endl;
	//cout << to_string( TestValue ) << endl;

	return 0;
}

