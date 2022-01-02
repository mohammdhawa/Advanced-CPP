#include <iostream>
#include <string>
#include <fstream>

#pragma pack(push, 1)

struct person {
	char name[50];
	int age;
	double weight;
};

#pragma pack(pop)

int main() {

	person someone = {"Mohammad", 23, 1.84};
	
	// Write binary file

	std::string fileName = "test.bin";

	std::ofstream outputFile;

	outputFile.open(fileName, std::ios::binary);

	if (outputFile.is_open()) {

		outputFile.write(reinterpret_cast<char*>(&someone), sizeof(person));
		
		outputFile.close();
	}
	else {
		std::cout << "Could not create file " + fileName << std::endl;
	}

	// Read binary file

	person someoneElse = {};

	std::ifstream inputFile;

	inputFile.open(fileName, std::ios::binary);

	if (inputFile.is_open()) {
		
		inputFile.read(reinterpret_cast<char*>(&someoneElse), sizeof(person));

		inputFile.close();
	}
	else {
		std::cout << "Could not create file " + fileName << std::endl;
	}

	std::cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.weight << std::endl;
	
	

	return 0;
}
