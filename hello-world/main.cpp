// main.cpp
// My first C++ Program - Nagehan Capa

#include <iostream>
#include <string>

constexpr auto greeting = "hello world!";
auto another_greeting = [](std::string m){
	return std::string("hello ") + m;};

int main() {
	std::cout << greeting << std::endl;
	std::cout << another_greeting("Nagehan!") << std::endl;
}