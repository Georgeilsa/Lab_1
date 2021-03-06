#include <iostream>
#include <cmath>
#include "Test.h"

bool Test_Xor1(BitString& character_1, BitString& character_2, BitString& character_3)
{
	character_1.Xor(character_1, character_2, character_3);
	if (character_3.Getter_senior() == 56 && character_3.Getter_junior() == 3) { return true; }
	else { return false; }
}

bool Test_Or1(BitString& �haracter_1, BitString& �haracter_2, BitString& character_3)
{
	�haracter_1.Or(�haracter_1, �haracter_2, character_3);
	if (character_3.Getter_senior() == 61 && character_3.Getter_junior() == 7) { return true; }
	else { return false; }
}

bool Test_And1(BitString& �haracter_1, BitString& �haracter_2, BitString& character_3)
{
	�haracter_1.And(�haracter_1, �haracter_2, character_3);
	if (character_3.Getter_senior() == 5 && character_3.Getter_junior() == 4) { return true; }
	else { return false; }
}

bool Test_Not1(BitString& �haracter_1, BitString& character_3)
{
	�haracter_1.Not(�haracter_1, character_3);
	if (character_3.Getter_senior() == 10 && character_3.Getter_junior() == 2) { return true; }
	else { return false; }
}
