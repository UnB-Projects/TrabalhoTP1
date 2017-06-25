#ifndef EMAIL_H_INCLUDED
#define EMAIL_H_INCLUDED

#include <stdexcept>
#include <string>

using namespace std;

/**
*Classe que gerencia os Emails dos Usuarios do Blog
*/
class Email {

private:
	string email;

	void valida(string) throw (invalid_argument);

public:
	void setEmail(string) throw (invalid_argument);
	string getEmail() const;
};

inline string Email::getEmail() const {
	return this->email;
}

#endif
