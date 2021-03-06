//
// Created by Brianna Zhang on 5/1/20.
//

#include <mylibrary/food.h>
#include <mylibrary/food_type.h>

namespace myapp {

Food::Food(const Location &given_loc, const FoodType &given_type)
    : loc{given_loc},
      food_type{given_type} {}

Location Food::GetLocation() const { return loc; }

FoodType Food::GetFoodType() const { return food_type; }
}
