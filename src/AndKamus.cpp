// always include standart lib first
#include <iostream>
#include <cstdlib>
// lib csv parser from
// https://github.com/ben-strasser/fast-cpp-csv-parser.git
#include "../lib/fast-cpp-csv-parser/csv.h"

// user included file
#include "AndKamus.h"

AndKamus::AndKamus() {
	//nothing to do
}

// check input user via CLI (Command Line Interface)
void AndKamus::evaluateParameter(int counter, const char *args) {

	// if args doesn't present
	if (counter != 2) {
		printError("\nError: Silahkan Masukan Kata yang akan ditranslate");
		showHelp();
		exit(1);
	}

	// store char *args to standart string
	// for ease
	std::string option = args;

	// stuff for -[directive]
	if (option == "-h" || option == "--help") {
		showHelp();
	}else if (option == "-v" || option == "--version") {
		showVersion();
	}else{
		// excute query to csv file
		find(option);
	}

}

// print help menu to console
void AndKamus::showHelp() {

	print("-------------------------");
	std::cout << getBlueColor() + "AndKamus" + getReset() + " " << getVersion() << std::endl;
	print("-------------------------");
	std::cout << "\nUsage: AndKamus [kata yang akan ditranslate] atau [opsi yang tersedia]" << std::endl;
	print("\n   Opsi yang tersedia:");
	std::cout << "\n   -h,--help\t\tMenampilkan Bantuan" << std::endl;
	std::cout << "   -v,--version\t\tMenampilkan Informasi Versi Aplikasi" << std::endl;
}

// show current version
void AndKamus::showVersion() {
	std::cout << getBlueColor() + "AndKamus" + getReset() + " " << getVersion() << std::endl;
	std::cout << "Developed by Muhammad Irwan Andriawan <andriawan2014@gmail.com>" << std::endl;
}

// all getter goes here
std::string AndKamus::getVersion() {
	return appVersion;
}

std::string AndKamus::getCsvData() {
	return csvData;
}

std::string AndKamus::getRedColor() {
	return "\e[0;31m";
}

std::string AndKamus::getBlueColor() {
	return "\e[0;94m";
}

// reset color CLI
std::string AndKamus::getReset() {
	return "\e[0m";
}

// end of getter

// standart print for easy access
void AndKamus::print(std::string input) {
	std::cout << input << std::endl;
}

// styled error print
void AndKamus::printError(std::string input) {
	std::cerr << getRedColor() + input + getReset() << std::endl;
}

// logic in querying data to csv
void AndKamus::find(std::string word) {

	// all go to lib abstraction
	io::CSVReader<10> in("../assets/andkamus.csv");
	// string about header column in csv file
	in.read_header(io::ignore_missing_column, "kata", "arti_1", "arti_2", "arti_3", "arti_4", "arti_5","arti_6","arti_7","arti_8","arti_9");
	
	// string about header column in csv file
	std::string check, kata, arti_1, arti_2, arti_3, arti_4, arti_5, arti_6, arti_7,arti_8, arti_9;

	// looping from the first line
	// this is the easiest way to go about
	// in some cases, it will feel nasty
	// querying all from top A to bottom Z all the time
	// gimme improvement if you have :)
	while(in.read_row(kata, arti_1, arti_2, arti_3, arti_4, arti_5, arti_6, arti_7, arti_8, arti_9)){

		// word is arg typed by user via CLI
		if (word.compare(kata) == 0) {

			// this is for checking if the word is present
			// in csv file, if not it will print error
			// handling by if in line 203
			check = kata;
		 	
		 	// just standart print
		 	std::cout << arti_1 << ", ";

		 	// every single line must have exactly 10 columns (requirement from lib csv parser)
		 	// the raw csv doesnt provide it
		 	// so i perform regex and replace all
		 	// arbitrary column to have exactly 10 columns
		 	// by appending "empty" string with comma (just check the csv file on assests folder)
		 	if (arti_2.compare("empty") == 0) {
		 		// if is not present, just exit
		 		exit(0);

		 	}else {

		 		std::cout << arti_2 << ", ";
		 	}

		 	if (arti_3.compare("empty") == 0) {

		 		exit(0);

		 	}else {

		 		std::cout << arti_3 << ", ";

		 	}

		 	if (arti_4.compare("empty") == 0) {

		 		exit(0);

		 	}else {

		 		std::cout << arti_4<< ", ";

		 	}

		 	if (arti_5.compare("empty") == 0) {

		 		exit(0);

		 	}else {

		 		std::cout << arti_5 << ", ";

		 	}

		 	if (arti_6.compare("empty") == 0) {

		 		exit(0);

		 	}else {

		 		std::cout << arti_6 << ", ";

		 	}

		 	if (arti_7.compare("empty") == 0) {

		 		exit(0);

		 	}else {

		 		std::cout << arti_7 << ", ";

		 	}

		 	if (arti_8.compare("empty") == 0) {

		 		exit(0);

		 	}else {

		 		std::cout << arti_8 << ", ";

		 	}

		 	if (arti_9.compare("empty") == 0) {

		 		exit(0);

		 	}else {

		 		std::cout << arti_9 << ", ";

		 	}

		}
	}

	// check if the word is present or not in the csv list
	// if not, just tell the user for some error
	if(check.empty()) {

		printError("Error: tidak ada kata yang cocok");

		exit(0);

	}
}