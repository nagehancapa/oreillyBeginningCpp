#ifndef SITE_HPP_
#define SITE_HPP_

#include <string>

#include "_us_address.hpp"
#include "_web_address.hpp"

class Site {
public:
    Site() : _id(-1) {}
    Site(long id, std::string name, WebAddress uri, USAddress postal)
        : _id(id), _name(name), _uri(uri), _postal(postal) {}
    virtual ~Site() {}

    std::string to_string() const { return _name + ": " + _uri.to_string(); }
private:
    long _id;
    std::string _name;
    WebAddress _uri;
    USAddress _postal;
};

#endif // SITE_HPP_