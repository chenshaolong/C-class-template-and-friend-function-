#include <iostream>

class Singleton {
private:
  	Singleton() {}
  	Singleton(const Singleton& s) {}
  	Singleton& operator=(const Singleton&) { return *this; }

public:
  	static Singleton& getInstance();
  	~Singleton() {}
  	void showMessage();
};


Singleton& Singleton::getInstance() {
  	static Singleton theSingleton;
  	return theSingleton;
}

void Singleton::showMessage() {
	std::cout << "This is the design pattern: Singleton!\n";
}

int main() {
	Singleton::getInstance().showMessage();
	Singleton::getInstance().showMessage();

	return 0;
}