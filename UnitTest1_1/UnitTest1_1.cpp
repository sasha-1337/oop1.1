#include "pch.h"
#include "CppUnitTest.h"
#include "../oop1.1/Number.h"
#include "D:\Student\oop1.1\oop1.1\Number.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest11
{
	TEST_CLASS(UnitTest11)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Number number;
			int a = 1;
			int b = 2;
			bool t;
			t = number.Init(a, b);
			Assert::AreEqual(t, true);

		}
	};
}
