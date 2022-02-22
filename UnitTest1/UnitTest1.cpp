#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab7.1.2/Lab7.1.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[][7]
			{	{1, 5, -3, 0, 9, 3, 6},
				{1, 5, 9, 3,-7, 3, 9},
				{1, 6, 3, 8, 5, 9, -6},
				{8, 4, 3, 9, 0, 6, 3}
			};

			int b[][7]
			{	{8, 4, 3, 9, 0, 6, 3},
				{1, 6, 3, 8, 5, 9, -6},
				{1, 5, -3, 0, 9, 3, 6},
				{1, 5, 9, 3,-7, 3, 9}
			};
			Sort(a, 4, 7);
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 7; j++)
				{
					Assert::AreEqual(a[i][j], b[i][j]);
				}
			}
		}

	};
}
