#include "mylib.hpp"

#include <random>
#include <string>


int randomInt(int min, int max)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);
    return dis (gen);
}

void formeCreuse(int x, int y)
{
   char character = '*';
        for(int i = 0; i < x; i++)
        {
            std::cout << character;
        }
        std::cout << std::endl;
}

float distanceManhattan(Point2D p1, Point2D p2)
{
    return 0.0f;
}


float distanceEuclidienne(Point2D p1, Point2D p2)
{
    return 0.0f;
}

void plusProcheVoisin(std::vector<Point2D> points, Point2D P, int dist)
{

}

void plusOuMoins(std::string plus, std::string moins)
{
    int min = 1;
    int max = 100;
    std::cout << randomInt(min,max);
}

void TP_exo1()
{ 
    int x;
    int y;
   
    std::cout << "Veuillez entrer le nombre de caractères à afficher: "; 
    std::cin >> x;
    std::cout << "Veuillez entrer le nombre de lignes à afficher: ";
    std::cin >> y;
         for(int i = 0; i < y; i++)
    {
        formeCreuse(x,y);
    }
    std::cout << std::endl;
    
}

void TP_exo2()
{


}

void TP_exo3()
{
    int nb;
std::cout << "Veuillez entrer un nombre : ";
std::cin >> nb;

}
