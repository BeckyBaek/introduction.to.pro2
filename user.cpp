#include"user.h"
#include"security.h"

User::User(std::string name, std::string password) {
	this->name = name;
	this->password = password;
}

bool User::Login() {
	int validation = Security::validate(name, password);
	return validation == 1 || validation == 2;
}