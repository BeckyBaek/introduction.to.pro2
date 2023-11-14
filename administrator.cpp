#include "administrator.h"
#include "security.h"

Administrator::Administrator(std::string name, std::string password) {
	this->name = name; 
	this->password = password;
}

bool Administrator::Login() {
	return Security::validate(name, password) == 2;
}
