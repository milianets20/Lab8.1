#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab8.1-string/Lab8.1-string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My81string
{
	TEST_CLASS(My81string)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string s("sh,k-'/,[-+");
			int t = Count(s);
			Assert::AreEqual(2, t);
		}
	};
}
