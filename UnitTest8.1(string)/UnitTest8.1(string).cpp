#include "pch.h"
#include "CppUnitTest.h"
#include "../8.1(string).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81string
{
	TEST_CLASS(UnitTest81string)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string t = "OGOOGOOGO";
			string h = "******";
			string& j = Change(t, "AGA", "OGO");
			Assert::AreEqual(j, t);
		}
	};
}
