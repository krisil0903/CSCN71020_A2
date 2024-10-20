#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "rectangle.h" // This includes the main program's header file
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

		// Adding unit tests for setWidth

		// Test a normal valid width input
		TEST_METHOD(TestSetWidth_Normal)
		{
			int width = 0;
			setWidth(75, &width);  // Normal case
			Assert::AreEqual(75, width);  // Expected width is 75
		}

		// Test a boundary valid width input (edge case)
		TEST_METHOD(TestSetWidth_MaxEdgeCase)
		{
			int width = 0;
			setWidth(99, &width);  // Maximum valid width
			Assert::AreEqual(99, width);  // Expected width is 99
		}

		// Test an invalid width input (above valid range)
		TEST_METHOD(TestSetWidth_InvalidInput)
		{
			int width = 99;
			setWidth(100, &width);  // Invalid input
			Assert::AreNotEqual(100, width);  // The function should not allow width to be set to 100
			Assert::AreEqual(99, width);  // Width should remain unchanged
		}

		// Additional Test 1: Test rectangle creation with maximum edge case values (99)
		TEST_METHOD(TestCreateRectangle_MaxEdgeCase)
		{
			Rectangle rect = createRectangle(99, 99);  // Max edge case
			Assert::AreEqual(99, rect.length);  // Ensure length is set to 99
			Assert::AreEqual(99, rect.width);   // Ensure width is set to 99
		}

		// Additional Test 2: Test rectangle creation with invalid values
		TEST_METHOD(TestCreateRectangle_InvalidValues)
		{
			Rectangle rect = createRectangle(-1, 150);  // Invalid values
			// If there's no validation, we expect the values to be what we pass in
			Assert::AreEqual(-1, rect.length);  // Length will be -1
			Assert::AreEqual(150, rect.width);  // Width will be 150
		}

	};
}
