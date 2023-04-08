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
   return abs(p2.x-p1.x) + abs(p2.y-p1.y);
}


float distanceEuclidienne(Point2D p1, Point2D p2)
{
     return std::sqrt(std::pow(p2.x-p1.x, 2) + std::pow(p2.y-p1.y, 2));
}

void plusProcheVoisin(std::vector<Point2D> points, Point2D P, int dist)
{

}

void plusOuMoins()
{
    int nbMyst = 0;
    int nbTent = 0;
    int nbEss = 0;
    int nbJoueur = 0;
    string rejouer;
    nbMyst = randomInt(0,100);
    nbTent = randomInt(5,15);
    

    do
    {
        std::cout <<"Veuillez rentrer un nolmbre entier compris entre 0 et 100 : ";
        sts::cin >> nbJoueur ;

        if(nbJoueur > 100 || nbJoueur < 0)
        {
            std::cout <<"Erreur"<<std::endl;
        }

        if(nbJoueur > nbMyst)
        {
            std::cout <<"plus, réessaies ! Il ne te reste que" << nbTent << " tentatives ";
            nbTent --;
            nbEss ++;
        }

        if(nbJoueur < nbMyst)
        {
            std::cout <<"moins, réessaies ! Il ne te reste que" << nbTent << " tentatives ";
            nbTent --;
            nbEss ++;
        }

        if(nbJoueur == nbMyst)
        {
            nbEss ++;
            std::cout << "Bravo tu as trouver le nombre mystère, en "<< nbEss <<" essaies";
            std::cout << "Tu veux rejouer ? Oui ou Non ? ";
            std::cin >> rejouer;

            if (rejouer == "Oui" || rejouer == "oui")
            {
                plusOuMoins();
            } 
            else
            {
                return;
            }
        }
        
    } 

    while (nbTent >= 0);
    std::cout << "Perdu, tu n'as pas trouver le nombre mystère : " << nbMyst;
    std::cout << "Tu veux rejouer ? ";
    std::cin >> rejouer;

     if (rejouer == "Oui" || rejouer == "oui")
        {
            plusOuMoins();
        } 
    else
        {
            return;
        }
}

void TP_exo1()
{ 
    int x;
    int y;
    char voidChar = ' ';
    char character = '*';
   
    std::cout << "Veuillez entrer le nombre de caractères à afficher: "; 
    std::cin >> y;
    std::cout << "Veuillez entrer le nombre de lignes à afficher: ";
    std::cin >> x;
         
    for(int i = 0; i < x; i++)
    { 
         for(int j = 0; j < y; i++)
        {  
            if(i == 0 || i == x-1)
            {
                 std::cout << character;
            }
            else if(j == 0 || j == y-1)
            {
                 std::cout << character;
            }
            else
            {
                std::cout << voidChar;
            }
        }
        std::cout << std::endl;
    }
}

void TP_exo2()
{
 
 //sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y,2));

 //faire une boucle for sur le vecteur (vecteur itr c++)

}

void TP_exo3()
{
    //utilisation d'un while
    int nb;
std::cout << "Veuillez entrer un nombre : ";
std::cin >> nb;

}
