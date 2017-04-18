// Struct-test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

struct Family
{
	int age;
	std::string sex;
	std::string name;

};

int main()
{
	Family Prince1;
	Family Prince2;
	Family Queen;
	Family Tom;

	Prince1.age = 17;
	Prince1.name = "Prince1";
	Prince1.sex = "Male";

	Prince2.age = 13;
	Prince2.name = "Prince2";
	Prince2.sex = "Male";

	Queen.age = 31;
	Queen.name = "Queen";
	Queen.sex = "Female";

	Tom.age = 46;
	Tom.name = "Tom";
	Tom.sex = "Male";


	std::cout << "Name: " << Prince1.name << "\t" << "Age: " << Prince1.age << "\t" << "Sex: " << Prince1.sex << std::endl;
	std::cout << "Name: " << Prince2.name << "\t" << "Age: " << Prince2.age << "\t" << "Sex: " << Prince2.sex << std::endl;
	std::cout << "Name: " << Queen.name << "\t" << "Age: " << Queen.age << "\t" << "Sex: " << Queen.sex << std::endl;
	std::cout << "Name: " << Tom.name << "\t" << "Age: " << Tom.age << "\t" << "Sex: " << Tom.sex << std::endl;

	system("pause");
    return 0;
}

