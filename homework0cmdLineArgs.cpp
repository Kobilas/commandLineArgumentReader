#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	ifstream inFile;
    char c;
    int numChar;
	for (int i = 1; i < argc; i++) {
        numChar = 0;
		inFile.open(argv[i]);
		if (inFile.is_open()) {
            while(inFile.get(c)){
                numChar++;
            }
			inFile.close();
			cout << argv[i] << " " << numChar << endl;
		}
		else {
			cout << argv[i] << " FILE NOT FOUND" << endl;
		}
	}
}
