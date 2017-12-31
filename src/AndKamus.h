#ifndef ANDKAMUS_H
#define ANDKAMUS_H

class AndKamus {

public:

	AndKamus();
	void showHelp();
	void showVersion();
	void evaluateParameter(int counter, const char *args);
	// just sort form of cout
	void print(std::string input);
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
	std::string appVersion = "0.1-beta";
	//path to csv data
	std::string csvData = "../assets/andkamus.csv";
	// query ke csv data
	void find(std::string word);
	

};

#endif