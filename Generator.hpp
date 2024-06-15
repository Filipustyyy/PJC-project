#pragma once

#ifndef PJCPROJECT_GENERATOR_HPP
#define PJCPROJECT_GENERATOR_HPP

#include <vector>
#include <string>
#include <fstream>
#include <iostream>

class Generator {
private:
	std::vector<std::string> wordList;

public:
	Generator();
	void generator(const std::string& diff);
	std::string getWord();

};


#endif //PJCPROJECT_GENERATOR_HPP
