#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	ifstream inFile;
	int size;
	for (int i = 1; i < argc; i++) {
		inFile.open(argv[i]);
		if (inFile.is_open()) {
            		inFile.seekg (0, inFile.end);
            		size = inFile.tellg();
			inFile.close();
			cout << argv[i] << " " << size << endl;
		}
		else {
			cout << argv[i] << " FILE NOT FOUND" << endl;
		}
	}
}
