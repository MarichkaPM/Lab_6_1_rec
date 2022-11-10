#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna 6_1_rec/Lab 6_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestfor61rec
{
	TEST_CLASS(UnitTestfor61rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t = 0;
			int arr[8] = { -1, 0, 3, -2, -8, 4, 7, -2 };
			int suma = 0;
			t = Sum(arr, suma, 0, 8);
			Assert::AreEqual(-13, t);
		}
	};
}
