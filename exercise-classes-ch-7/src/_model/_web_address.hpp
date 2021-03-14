#ifndef WEB_ADDRESS_HPP_
#define WEB_ADDRESS_HPP_

#include <string>

#include "_address.hpp"

class WebAddress : public _address {
public:
    WebAddress() {}
    WebAddress(const WebAddress& rhs) : _address(rhs), _uri(rhs._uri) {}
    WebAddress(std::string e) : _uri(e) {}
    virtual ~WebAddress() {}

    WebAddress& operator=(const WebAddress& rhs) {
        _address::operator=(rhs);
        
        if(&rhs != this) {
            _uri = rhs._uri;
        }
        return *this;
    }

    std::string to_string() const override { return _uri; }

private:
    std::string _uri;
};

#endif // WEB_ADDRESS_HPP_