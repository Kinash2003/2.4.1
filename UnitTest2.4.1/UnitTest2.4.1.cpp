#include "pch.h"
#include "CppUnitTest.h"
#include "../2.4.1/Matrix.cpp"
#include "../2.4.1/Matrix.h"
#include "../2.4.1/Humber.h"
#include "../2.4.1/Humber.cpp"




using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest241
{
	TEST_CLASS(UnitTest241)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			Matrix A(3), B(3);
			Assert::AreEqual(A == B, true);
		}
	};
}
