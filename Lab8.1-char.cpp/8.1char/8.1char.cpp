#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include "CppUnitTest.h"
#include "../Lab8.1-char/Lab8.1-char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My81char
{
	TEST_CLASS(My81char)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char s[12] = "sh,k-'/,[-+";
			int t = Count(s);
			Assert::AreEqual(2, t);
		}
	};
}
