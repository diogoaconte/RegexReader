#ifndef WATCHDOG_HPP_
#define WATCHDOG_HPP_

#include "NameAnalyzer.hpp"
#include "Configuration.hpp"
#include "FileManager.hpp"
#include <iostream>
#include <chrono>
#include <thread>

// Class responsible for managing process loop
class Watchdog {

public:
	Watchdog();
	virtual ~Watchdog();
	void loop();
	void sleep(int seconds);
	bool m_IsLooping;
};

#endif /* WATCHDOG_HPP_ */
