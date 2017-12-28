// always include standart lib first
#include <iostream>
#include "AndKamus.h"

AndKamus::AndKamus() {
}

void AndKamus::evaluateParameter(int counter, const char *args) {

	
	if (counter != 2) {
		std::cerr << "\nError: Silahkan Masukan Kata yang akan ditranslate" << std::endl;
		showHelp();
		exit(1);
	}

	std::string option = args;

	if (option == "-h" || option == "--help") {
		showHelp();
	}else if (option == "-v" || option == "--version") {
		showVersion();
	}

}

void AndKamus::showHelp() {

	print("------------");
	std::cout << "AndKamus " << getVersion() << std::endl;
	print("------------");
	std::cout << "\nUsage: AndKamus [kata yang akan ditranslate] atau [opsi yang tersedia]" << std::endl;
	print("\n   Opsi yang tersedia:");
	std::cout << "\n   -h,--help\t\tMenampilkan Bantuan" << std::endl;
	std::cout << "\n   -v,--version\t\tMenampilkan Informasi Versi Aplikasi" << std::endl;
}

std::string AndKamus::getVersion() {
	return appVersion;
}

void AndKamus::print(std::string input) {
	std::cout << input << std::endl;
}

void AndKamus::showVersion() {
	std::cout << "AndKamus " << getVersion() << std::endl;
	std::cout << "Developed by Muhammad Irwan Andriawan <andriawan2014@gmail.com>" << std::endl;
}