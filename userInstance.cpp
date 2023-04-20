#include "userInstance.h"

userInstance::userInstance(){}

userInstance::userInstance(QString _username, QString _password) {
	this->username = _username;
	this->password = _password;
}

userInstance::userInstance(QString _username, QString _password, QString _email) {
	this->username = _username;
	this->password = _password;
	this->email = _email;
}

void userInstance::setUsername(QString _username)
{
	this->username = _username;
}

void userInstance::setPassword(QString _password)
{
	this->password = _password;
}

void userInstance::setEmail(QString _email)
{
	this->email = _email;
}

QString userInstance::getUsername()
{
	return this->username;
}

QString userInstance::getPassword()
{
	return this->password;
}

QString userInstance::getEmail()
{
	return this->email;
}
