#include "Smart_array.h"

#include <iostream>


void array_info(const Smart_array<int>& arr);

int main() {
	setlocale(LC_ALL, "ru");
	std::cout << "\tУмный массив.\n" << std::endl;

	try {
		Smart_array<int> arr(5);
		arr.add_element(1);
		arr.add_element(4);
		arr.add_element(155);
		arr.add_element(14);
		arr.add_element(15);
		arr.add_element(5);
		array_info(arr);

		int numberOfElement = 1;
		std::cout << "Элемент умного массива под номером " << numberOfElement << " = " << arr.get_element(numberOfElement) << std::endl << std::endl;
	}
	catch (const std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}

	system("pause > nul");
	return 0;
}

void array_info(const Smart_array<int>& arr) {
	std::cout << "Smart_array '" << arr.get_address() << "': ";
	for (size_t i = 0; i < arr.get_size(); ++i) {
		std::cout << arr.get_element(i) << " ";
	}
	std::cout << "\nРазмер массива: " << arr.get_size() << std::endl;
	std::cout << "Емкость массива: " << arr.get_capacity() << std::endl << std::endl;
}
