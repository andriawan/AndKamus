#ifndef ANDKAMUS_H
#define ANDKAMUS_H

class AndKamus {

public:

	AndKamus();
	void showHelp();
	void showVersion();
	// take an input from user
	void evaluateParameter(int counter, const char *args);
	void doInteractiveMode(int flag);
	// just sort form of cout
	void print(std::string input);
	// return lowercase string
	std::string toLowerCase(std::string input);
	// print input to Error styled Message
	void printError(std::string input);
	//get App version
	std::string getVersion();
	std::string getCsvData();
	// prettify cli display
	std::string getRedColor();
	std::string getReset();
	std::string getBlueColor();

private:
	//app version
	std::string const appVersion = "0.1-beta";
	//path to csv data
	std::string const csvData = "/usr/local/share/AndKamus/data/andkamus.csv";
	// query ke csv data
	void find(std::string word, int flag);
	

};

#endif
