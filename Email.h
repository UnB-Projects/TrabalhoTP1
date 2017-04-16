#ifndef EMAIL_H_
#define EMAIL_H_

#include <iostream>
#include <string>

using namespace std;

class Email {

private:
	string email;

	void valida(string) throw (invalid_argument);

public:
	//Email(Nome, Nome, Nome);

	void setEmail(string) throw (invalid_argument);
	string getEmail();
};

#endif