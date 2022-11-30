#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include "CppUnitTest.h"
#include "../Lab8.1-rec/Lab8.1-rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My81rec
{
	TEST_CLASS(My81rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char s[12] = "sh,k-'/,[-+";
			int t = Count(s, 1);
			Assert::AreEqual(2, t);
		}
	};
}
