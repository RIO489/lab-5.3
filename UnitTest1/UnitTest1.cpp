#include "pch.h"
#include "CppUnitTest.h"
#include "../lab-5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double tmp;
			tmp=h(0);
			Assert::AreEqual(2., tmp);
		}
	};
}
