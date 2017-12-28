#ifndef ANDKAMUS_H
#define ANDKAMUS_H

class AndKamus {

public:
	AndKamus();
	void showHelp();
	void showVersion();
	std::string getVersion();
	void evaluateParameter(int counter, const char *args);
	void print(std::string input);

private:
	std::string appVersion = "0.1-beta";

};

#endif