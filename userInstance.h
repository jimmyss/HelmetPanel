#pragma once
#include<QString>
class userInstance
{
private:
	QString username;
	QString password;
	QString email;
public:
	userInstance();
	userInstance(QString _username, QString _password);
	userInstance(QString _username, QString _password, QString _email);

	void setUsername(QString _username);
	void setPassword(QString _password);
	void setEmail(QString _email);

	QString getUsername();
	QString getPassword();
	QString getEmail();
};

