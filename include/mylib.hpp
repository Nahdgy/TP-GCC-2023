#ifndef _MYLIB_HPP_
#define _MYLIB_HPP_

#include <iostream>
#include <vector>

#include "Point2D.hpp"

 /// @fn  randomInt(int min, int max)
    /// @brief Choose a random integer number between a range 
    /// @param[in] min Minimum of the range
    /// @param[in] max Maximum of the range
int randomInt(int min, int max);

/// @fn  formeCreuse(int x, int y)
    /// @brief Draw a allow box with "*" 
    /// @param[in] x Horizontal line
    /// @param[in] y Vertical line
void formeCreuse(int x, int y);

/// @fn  formeCreuse(int x, int y)
    /// @brief Draw a allow box with "*" 
    /// @param[in] x Horizontal line
    /// @param[in] y Vertical line
float distanceEuclidienne(Point2D p1, Point2D p2);

/// @fn   distanceManhattan(Point2D p1, Point2D p2)
    /// @brief Calculate a Manhattan distance between 2 2D points 
    /// @param[Point2D] p1 first point
    /// @param[Point2D] p2 second point
float distanceManhattan(Point2D p1, Point2D p2);

/// @fn  plusProcheVoisin(std::vector<Point2D> points, Point2D P, int dist)
    /// @brief Draw a allow box with "*" 
    /// @param[Point2D array] points multiple points
    /// @param[Point2D] p represetation of the base station point
    /// @param[int] Euclide distance between 2 points
void plusProcheVoisin(std::vector<Point2D> points, Point2D P, int dist);

/// @fn  plusOuMoins()
    /// @brief Game where the player have to choose a int in a range to found the good number 
void plusOuMoins();

/// @fn  TP_exo1()
void TP_exo1();

/// @fn TP_exo2()
void TP_exo2();

/// @fn  TP_exo3()
void TP_exo3();


#endif // _MYLIB_HPP_