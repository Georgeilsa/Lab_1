#include <iostream>
#include "Header.h"
#include "Test.h"

int main()
{

	long int senior_1;
	unsigned long int junior_1;
	long int senior_2;
	unsigned long int junior_2;
	char num[] = "53.5";
	char num2[] = "13.6";

	convert_a_numbers_from_char_to_int(num, sizeof(num), &senior_1, &junior_1);
	convert_a_numbers_from_char_to_int(num2, sizeof(num2), &senior_2, &junior_2);
	BitString character_1(senior_1, junior_1);
	BitString character_2(senior_2, junior_2);
	
	BitString Test(0, 0);
	long int a = 0;
	unsigned long int b = 0;

	std::cout << "Xor test" << std::endl;
	std::cout << "the numbers that we transmit-" << character_1.Getter_senior() << "." << character_1.Getter_junior() << " and ";
	std::cout << character_2.Getter_senior() << "." << character_2.Getter_junior() << std::endl;;
	std::cout << "The number that should be obtained-" << "56.3" << std::endl;
	std::cout << "Result of Xor work - "<< Test_Xor1(character_1, character_2, Test) << std::endl << std::endl << std::endl << std::endl;
	

	std::cout << "Or test" << std::endl;
	std::cout << "the numbers that we transmit-" << character_1.Getter_senior() << "." << character_1.Getter_junior() << " and ";
	std::cout << character_2.Getter_senior() << "." << character_2.Getter_junior() << std::endl;;
	std::cout << "The number that should be obtained-" << "61.7" << std::endl;
	std::cout << "Result of Or work - " << Test_Or1(character_1, character_2, Test) << std::endl << std::endl << std::endl << std::endl;

	std::cout << "And test" << std::endl;
	std::cout << "the numbers that we transmit-" << character_1.Getter_senior() << "." << character_1.Getter_junior() << " and ";
	std::cout << character_2.Getter_senior() << "." << character_2.Getter_junior() << std::endl;;
	std::cout << "The number that should be obtained-" << "5.4" << std::endl;
	std::cout << "Result of And work - " << Test_And1(character_1, character_2, Test) << std::endl << std::endl << std::endl << std::endl;

	std::cout << "Not test" << std::endl;
	std::cout << "the numbers that we transmit-" << character_1.Getter_senior() << "." << character_1.Getter_junior() << " and "<<std::endl;
	std::cout << "The number that should be obtained-" << "10.2" << std::endl;
	std::cout << "Result of Not work - " << Test_Not1(character_1, Test) << std::endl << std::endl << std::endl << std::endl;

	std::cout << "Character_1 binary- " << character_1.To_String_binary() << std::endl;
}