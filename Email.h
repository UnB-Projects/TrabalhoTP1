#ifndef EMAIL_H_INCLUDED
#define EMAIL_H_INCLUDED

#include <stdexcept>
#include <string>

using namespace std;

class Email {

private:
	string email;

	void valida(string) throw (invalid_argument);

public:
	//Email(Nome, Nome, Nome);

	void setEmail(string) throw (invalid_argument);
	string getEmail() const;
};

inline string Email::getEmail() const {
	return this->email;
}

#endif