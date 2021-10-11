#pragma once

/// @defgroup group_2 Example Part
/// First group, that has demonstration meaning
/// @{

/// @brief This class is created to demonstrate ***Doxygen*** abilities
/// 
/// Made by vermakov@kappa.cs.petrsu.ru in ExampleProject project via VS Studio 2019
/// @see PointClass
class ExampleClass
{
public:
	/// @brief Function, that adds up two numbers
	///
	/// Detailed func desc.
	/// @param a describes parameter a
	/// @param b describes parameter b
	/// @returns Summ of @param a and @param b
	/// @see some_function()
	/// @note a and b must be integer non negative numbers
	/// @attention some_function() returns identity
	/// @warning This code is absolute ***trash***
	int some_function(int a, int b);
	
	/// @brief Function for recieving transmitted argument
	/// 
	/// Detailed desc.
	/// @param a is integer
	/// @returns Identity
	/// @todo Make function return value of any type
	int some_function(int a);
};

/// @} //end of group_2
