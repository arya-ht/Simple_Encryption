#include <iostream>
#include <fstream>
using namespace std;
// Arya HajiTaheri
int main() {

	ifstream myfile;
	myfile.open("encrypted.txt");
	const int array_Size = 200;
	char output[array_Size];

	if (myfile.is_open()) {
		cout << "File opened successfully!\n";
		while (!myfile.eof()) {
			myfile >> output;
			for (int i = 0; i < array_Size; i++) {
				switch (output[i]) {
				case '1':
					output[i] = 'a';
					break;
				case '2':
					output[i] = 'e';
					break;
				case '3':
					output[i] = 'i';
					break;
				case '4':
					output[i] = 'o';
					break;
				case '5':
					output[i] = 'u';
					break;
				case '6':
					output[i] = ' ';
					break;
				}
			}
		}
	}
	else {
		cout << "File could not be opened.\n";
	}
	cout << "\n" << output << "\n";

	ofstream output_File;
	output_File.open("message.txt");
	if (!output_File.is_open()) {
		cout << "Cannot open the file!\n";
	}
	else {
		cout << "\nmessage.txt is successfully created!\n";
		output_File << output;
	}
	myfile.close();
	output_File.close();

	return 0;
}
