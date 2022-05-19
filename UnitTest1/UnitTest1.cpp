#include "pch.h"
#include "CppUnitTest.h"
#include "../../../../../політех/ооп/4/lab_4.5/lab_4.5/Time.cpp"
#include "../../../../../політех/ооп/4/lab_4.5/lab_4.5/Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Time A1(9, 9, 9, 0), B1(9, 9, 9, 0);
			Assert::AreEqual(A1 == B1, true);
		}
	};
}
