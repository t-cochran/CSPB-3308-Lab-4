#ifndef BASKET
#define BASKET

#include <vector>
#include <string>

/*
 *  FRUIT!
 */
typedef struct
{

    std::string name;
    std::string color;
    int rating;

} Fruit;


/* 
 *  A delicious assortment of fruits
 */ 
class Fruit_Basket
{
    private:
        std::vector<Fruit> all_them_fruits;

    public:
        Fruit_Basket();
        void push_fruit(Fruit name);
        void gimme(std::string name);
        void print_fruit();
        void find_tastiest();
        ~Fruit_Basket();
};

#endif
