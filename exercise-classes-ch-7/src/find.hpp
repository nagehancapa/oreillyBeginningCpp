#ifndef FIND_HPP_
#define FIND_HPP_

#include <string>

std::string find(std::string to_find, std::string data[], int beg, int end) {
	
	while (beg <= end) {
		int mid = beg + (end - beg) / 2;
		
		if (data[mid] == to_find)
			return to_find;
		else if (data[mid] < to_find)
			beg = mid + 1;
		else
			end = mid - 1;
	}
	
	return ""; //Not found
}

// namespace intro {
// 	 std::string (*find)(std::string value, std::string data[], std::size_t beg, std::size_t end) = __find;
// }

#endif // FIND_HPP_