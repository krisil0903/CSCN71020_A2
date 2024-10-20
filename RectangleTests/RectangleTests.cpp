#include "pch.h"
#include "CppUnitTest.h"
extern"c" {
#include "rectangle.h" //This includes the main program'sheader file
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RectangleTests
{
	TEST_CLASS(RectangleTests)
	{
	public:
		
		//Test to check valid rectangle creation
		TEST_METHOD(TestValidRectangle)
		{
			//Test a valid rectangle
			Rectangle  rect = createRectangle(10, 20); //Assuming createRectangle is a function
			Assert::AreEqual(10, rect.length); //Check if length is set correctly
			Assert::AreEqual(20, rect.width);   // Check if width is set correctly

		}

		// Test to check if area calculation is correct
		TEST_METHOD(TestAreaCalculation)
		{
			Rectangle rect = createRectangle(10, 20);
			int area = calculateArea(rect);  // Assuming function calculateArea exists
			Assert::AreEqual(200, area);     // Check if area is 10 * 20 = 200
		}

		// Test to check if perimeter calculation is correct
		TEST_METHOD(TestPerimeterCalculation)
		{
			Rectangle rect = createRectangle(10, 20);
			int perimeter = calculatePerimeter(rect);  // Assuming function calculatePerimeter exists
			Assert::AreEqual(60, perimeter);           // Check if perimeter is 2 * (10 + 20) = 60
		}

	};
}
