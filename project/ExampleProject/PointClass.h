#pragma once
#include <math.h>
#include <utility>

/// @defgroup group_1 Semantic Part
/// First group, that has some meaning
/// @{

/// @brief This class describes point structure
/// 
/// Made by vermakov@kappa.cs.petrsu.ru in ExampleProject project via VS Studio 2019
/// @see ExampleClass
class PointClass
{
public:
	/// **x** coordinate of the point
	int x;
	/// **y** coordinate of the point
	int y;

	/// @brief Function, that calculates distance between 2 points
	///
	/// Detailed func des.
	/// @param point is second point, we want to calculate distance to	
	/// @returns distance between 2 points			
	/// @note This function returns float distance
	double dist(PointClass point);
private:
	/// @brief Function, that returns pair of point coordinates
	///
	/// Detailed func des.	
	/// @returns Pair of 2 float numbers: x and y	
	/// @attention Function converts int coordinates to float values
	std::pair<double, double> abs();
};

/// @}	//end of group_1

