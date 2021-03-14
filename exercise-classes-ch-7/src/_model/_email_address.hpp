#ifndef EMAIL_ADDRESS_HPP_
#define EMAIL_ADDRESS_HPP_

#include <string>

#include "_address.hpp"

class EmailAddress : public _address {
public:
    EmailAddress() {}
    EmailAddress(const EmailAddress& rhs) : _address(rhs), _email(rhs._email) {}
    EmailAddress(std::string e) : _email(e) {}
    virtual ~EmailAddress() {}

    EmailAddress& operator=(const EmailAddress& rhs) {
        _address::operator=(rhs);

        if(&rhs != this) {
            _email = rhs._email;
        }

        return *this;
    }

    std::string to_string() const override {
        return _email;
    }

private:
    std::string _email;
};
#endif // EMAIL_ADDRESS_HPP_