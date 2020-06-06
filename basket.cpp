#include "include/basket.hpp"

// Construct dat basket
Fruit_Basket::Fruit_Basket() {};

void::Fruit_Basket::push_fruit(Fruit name)
{
    all_them_fruits.push_back(name);
}

// Consume a fruit of your choice
void::Fruit_Basket::gimme(std::string name)
{
    for (std::vector<Fruit>::iterator it = all_them_fruits.begin();
            it != all_them_fruits.end();
            it++)
    {
        if (it -> name == name)
        {
            printf("found yo fruit. here it is: %s\n", it -> name.c_str());
            all_them_fruits.erase(it);
            return;
        }
    }
    printf("The basket is all out of %s :(\n", name.c_str());
}

// What in the basket???
void::Fruit_Basket::print_fruit()
{
    printf("FRUIT BASKET CONTENTS:\n");
    for (auto it=all_them_fruits.begin(); it != all_them_fruits.end(); it++)
    {
        printf("%s\n", it->name.c_str());
    }
}

// Which one is the tastiest??????
void::Fruit_Basket::find_tastiest()
{
    if (all_them_fruits.empty())
    {
        printf("OUT OF FRUIT!\n");
        return;
    }

    int highestRating = 0; std::string bestFruit;
    for (auto it=all_them_fruits.begin(); it != all_them_fruits.end(); it++)
    {
        if (it -> rating >= highestRating)
        {
            highestRating = it -> rating;
            bestFruit = it -> name; 
        }
    }
    printf("The best fruin in the basket is: %s : %d rating\n", 
            bestFruit.c_str(), highestRating);
}

// Destruct dat basket
Fruit_Basket::~Fruit_Basket() {};
