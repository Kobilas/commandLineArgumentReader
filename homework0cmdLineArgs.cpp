#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	fstream inFile;
	int numChar;
	string line;
	for (int i = 0; i < argc; i++) {
		numChar = 0;
		inFile.open(argv[i]);
		if (inFile.is_open()) {
			while (getline(inFile, line)) {
				numChar += line.length();
			}
			inFile.close();
			cout << argv[i] << " " << numChar << endl;
		}
		else {
			cout << argv[i] << " FILE NOT FOUND" << endl;
		}
	}
}
