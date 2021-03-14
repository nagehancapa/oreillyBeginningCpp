#ifndef FUNCTIONS_HPP_
#define FUNCTIONS_HPP_

#include <string>

#include "file_system.hpp"
#include "string_utils.hpp"

#include "data.hpp"
#include "find.hpp"

#include"model.hpp"

void calculate(const std::string& file_name) {

    constexpr auto aggregate = [&](const std::string& line) {
        auto parts = split(line, "|", true);
        std::string val = find(parts[STATE_POS], states.get(), START_IDX, END_IDX);
        if (val != ""){
            data::FarmersSite s(std::stol(parts[0]),
                    parts[1],
                    WebAddress(parts[2]),
                    addr::USAddress(parts[3], parts[4], parts[5], to_abbrev(parts[6]), parts[7]));
            std::cout << s.to_string() << std::endl;
        }
    };

    fs::FileReader<std::string> reader(file_name);
    if (reader) {
        reader.for_each(aggregate);
    }
    }

    void display() {
    for(auto& state: frequencies) {
        std::cout << std::left
            << std::setw(15)
            << state.first
            << ": "
            << std::right
            << std::setw(10)
            << state.second
            << std::endl;
    }
}

#endif // FUNCTIONS_HPP_