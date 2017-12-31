// always include standart lib first
#include <iostream>
#include <cstdlib>
#include "../lib/fast-cpp-csv-parser/csv.h"

// user included file
#include "AndKamus.h"

AndKamus::AndKamus() {
}

void AndKamus::evaluateParameter(int counter, const char *args) {

	
	if (counter != 2) {
		printError("\nError: Silahkan Masukan Kata yang akan ditranslate");
		showHelp();
		exit(1);
	}

	std::string option = args;

	if (option == "-h" || option == "--help") {
		showHelp();
	}else if (option == "-v" || option == "--version") {
		showVersion();
	}else{
		find(option);
	}

}

void AndKamus::showHelp() {

	print("-------------------------");
	std::cout << getBlueColor() + "AndKamus" + getReset() + " " << getVersion() << std::endl;
	print("-------------------------");
	std::cout << "\nUsage: AndKamus [kata yang akan ditranslate] atau [opsi yang tersedia]" << std::endl;
	print("\n   Opsi yang tersedia:");
	std::cout << "\n   -h,--help\t\tMenampilkan Bantuan" << std::endl;
	std::cout << "   -v,--version\t\tMenampilkan Informasi Versi Aplikasi" << std::endl;
}

void AndKamus::showVersion() {
	std::cout << getBlueColor() + "AndKamus" + getReset() + " " << getVersion() << std::endl;
	std::cout << "Developed by Muhammad Irwan Andriawan <andriawan2014@gmail.com>" << std::endl;
}

// getter

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

void AndKamus::print(std::string input) {
	std::cout << input << std::endl;
}

void AndKamus::printError(std::string input) {
	std::cerr << getRedColor() + input + getReset() << std::endl;
}

// logic in querying data to csv
void AndKamus::find(std::string word) {

	io::CSVReader<10> in("../assets/andkamus.csv");
	in.read_header(io::ignore_missing_column, "kata", "arti_1", "arti_2", "arti_3", "arti_4", "arti_5","arti_6","arti_7","arti_8","arti_9");
	
	std::string check, kata, arti_1, arti_2, arti_3, arti_4, arti_5, arti_6, arti_7,arti_8, arti_9;

	while(in.read_row(kata, arti_1, arti_2, arti_3, arti_4, arti_5, arti_6, arti_7, arti_8, arti_9)){

		if (word.compare(kata) == 0) {

			check = kata;
		 	
		 	std::cout << arti_1 << ", ";

		 	if (arti_2.compare("empty") == 0) {

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

	if(check.empty()) {

		printError("Error: tidak ada kata yang cocok");

		exit(0);

	}
}