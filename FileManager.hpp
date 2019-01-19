#ifndef FILEMANAGER_HPP_
#define FILEMANAGER_HPP_

#include "NameAnalyzer.hpp"
#include "Configuration.hpp"
#include <string>
#include <regex>
#include <list>
#include <iostream>

using namespace std;

// Class responsible for the manipulation of the files within filesystem context
class FileManager {
public:
	FileManager();
	virtual ~FileManager();

	static void processFiles();
	static void transferFile(string filePath);

	static bool isToBeTransferred(string filePath);

	//LIBCONFIG_API::

};

#endif /* FILEMANAGER_HPP_ */
