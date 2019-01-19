#include "Watchdog.hpp"

using namespace std;

const int CYCLE_TIME = 5;

Watchdog::Watchdog(){
	m_IsLooping = true;
}

Watchdog::~Watchdog(){
}

void Watchdog::loop() {
	while (m_IsLooping) {
		cout << "--- Begin iteration ---" << endl;
		Configuration::getInstance().generateRandomConfig();
		FileManager::processFiles();
		sleep(CYCLE_TIME);
		cout << "---- End iteration ----" << endl;
	}
}

void Watchdog::sleep(int seconds) {
	this_thread::__sleep_for(std::chrono::seconds(seconds),std::chrono::nanoseconds(0));
}
