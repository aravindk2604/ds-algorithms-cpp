

#include <bits/stdc++.h>

struct Car {
    unsigned speed;
    unsigned price;

}cars[100];

bool comp(Car A, Car B) {
    // if(A.speed != B.speed) return A.speed > B.speed;
    // else return A.price < B.price;
    return (1.0*A.speed/A.price) > (1.0*B.speed/B.price);
}

int main() {

    cars[0].speed = 100; cars[0].price = 50;
    cars[1].speed = 200; cars[1].price = 140;
    cars[2].speed = 200; cars[2].price = 120;
    cars[3].speed = 108; cars[3].price = 90;
    cars[4].speed = 145; cars[4].price = 150;
    cars[5].speed = 55; cars[5].price = 55;
    cars[6].speed = 98; cars[6].price = 70;
    
    std::sort(cars+0, cars+7, comp);
    std::cout << "Wohoo!";
    return 0;
}