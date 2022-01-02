#include <iostream>
#include <fstream>



int main() {
	std::ofstream outFile;

	std::string outFileName = "text.txt";

	outFile.open(outFileName);

	if (outFile.is_open()) {
		outFile << "Hello there " << std::endl;
		outFile << "123" << std::endl;
		outFile << 9912 << std::endl;
		outFile.close();
	}
	else {
		std::cout << "Could not create file: " << outFileName << std::endl;
	}
	
	
	

	return 0;
}
