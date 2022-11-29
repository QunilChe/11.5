#include "pch.h"
#include "CppUnitTest.h"
#include "../11.5/out.h"
#include "../11.5/var.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsOut;
using namespace nsVar;
namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t = Fond();
			Assert::AreEqual(t, 0);
		}
	};
}
