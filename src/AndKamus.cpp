#include "AndKamus.h"

AndKamus::AndKamus() {
}

int AndKamus::showHelp(int counter, const char *args) {

	if (counter != 2) {
		cout << getVersion() << endl;
		cerr << "Error: Silahkan Masukan Kata yang akan ditranslate" << endl;
		exit(1);
	}

	string str1("-h");
	string str2("--help");

	if (str1.compare(args) == 0 || str2.compare(args) == 0) {
		cout << "Usage: AndKamus [kata yang akan ditranslate]" << endl;
		cout << "\t-h,--help\t\tMenampilkan Bantuan" << endl;
	} else {
		cout << "no" << endl;
	}
}