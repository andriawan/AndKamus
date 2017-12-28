// always include standart lib first
#include <iostream>

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
		// query to csv file
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