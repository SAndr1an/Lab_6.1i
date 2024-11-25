#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.1i/Lab_6.1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestCountElements)
		{
			int t[] = { 1, -3, 4, 0, 5, -6, 7, -9, 8, 3 };
			int size = 10;

			int count = CountElements(t, size);
			Assert::AreEqual(3, count);
		}

		TEST_METHOD(TestSumElements)
		{
			int t[] = { 1, -3, 4, 0, 5, -6, 7, -9, 8, 3 };
			int size = 10;

			int sum = SumElements(t, size);
			Assert::AreEqual(14, sum);
		}

		TEST_METHOD(TestTurnToZero)
		{
			int t[] = { 1, -3, 0, 0, 5, -6, 7, -9, 8, 3 };
			int size = 10;

			TurnToZero(t, size);

			int expected[] = { 1, -3, 0, 0, 5, -6, 0, -9, 8, 0 };

			for (int i = 0; i < size; i++) {
				Assert::AreEqual(expected[i], t[i]);
			}
		}
		;
	};
}
