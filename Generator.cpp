#include "Generator.hpp"

Generator::Generator() = default;

void Generator::generator(const std::string &diff) {
	std::ifstream file(".\\monkeyvault\\words\\" + diff + ".txt");
	std::string line;

	if (!file) {
		std::cerr << "Cannot open " << diff << ".txt\n";
	}

	wordList.clear();

	while (std::getline(file, line)) {
		wordList.push_back(line);

	}

	file.close();
}

std::string Generator::getWord() {
	return wordList[rand() % wordList.size()];
}


