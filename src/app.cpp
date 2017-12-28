/*
 * Create By : Muhammad Irwan Andriawan
 * This is CLI Apps as Dictionary
 * Name: AndKamus (ID - ENG, ENG - ID) Dictionary
 * Version: 0.1
 */

#include <cstdlib>
#include "AndKamus.cpp"

// entry point of the apps
int main(int argc, char const *argv[])
{
	// argv[0] = the name of the app
	// argv[1] = the first argument
	AndKamus ak;
	ak.evaluateParameter(argc, argv[1]);
	return 0;
}