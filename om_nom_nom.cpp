#include "include/basket.hpp"

int main(int argc, char* argv[])
{
    
    /* Make some fruit! */
    Fruit banana;
    banana.name = "banana";
    banana.color = "Yellow";
    banana.rating = 5;
    
    Fruit apple;
    apple.name = "apple";
    apple.color = "red";
    apple.rating = 7;

    Fruit mango;
    mango.name = "mango";
    mango.color = "orange";
    mango.rating = 8;

    Fruit kiwi;
    kiwi.name = "kiwi";
    kiwi.color = "green";
    kiwi.rating = 4;

    /* Fill our basket with delicious fruit */
    Fruit_Basket* fruit_basket = new Fruit_Basket;
    fruit_basket -> push_fruit(banana);
    fruit_basket -> push_fruit(apple); 
    fruit_basket -> push_fruit(mango); 
    fruit_basket -> push_fruit(kiwi); 

    /* gimme an apple */
    fruit_basket -> gimme("apple");

    /* What's left? */
    fruit_basket -> print_fruit();

    /* What's the tastiest one? */
    fruit_basket -> find_tastiest();

    return 0;

}

