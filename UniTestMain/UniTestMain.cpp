#include "pch.h"
#include "CppUnitTest.h"
#include<string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#include"..\UniTestsDemo\UniTestsDemo.cpp"

namespace категория_тестов
{
	TEST_CLASS(тестовый_блок) // Например, тест дробей
	{
	public:
		
		TEST_METHOD(конкретный_тестовый_эпизод) // Конкретные тестовые задания, которые проверяют, что всё сделано правльно
		{
		}
		
		TEST_METHOD(SimpleSumm) { // Конкретные тестовые задания, которые проверяют, что всё сделано правльно
			Summ(0,0);
			Assert::AreEqual( // явл. ли возврат ф. соответствующим возврату, который мы ожидаем, 
			std::to_string(7).c_str(), // Ожидаемое значение, что должно произойти, c_str() - для перевода строки с++ в строку с, т.к. Assert работает только с сишными строками
				std::to_string(Summ(0,0)).c_str(), // что на самом деле произошло
				std::string("cant call").c_str() // что сказать тестеровщику, если тест не пройден
			);
		}
	};
}
