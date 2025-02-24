/*
 * @Author       : Sean Lin
 * @Date Created : Feb. 12th, 2025
 * @File Name    : topic_2_lab_3.cpp
 * @Project      : Topic 2 Lab 3
 * @Description  : Stores the user's name and product's name in variables. Also, stores the calores, fat,
 *                 and carbohydrates per serving in 3 double variables. Then, print out the user's 
 *                 name, product's name, and total calories, fat, and carbohydrates for 3 servings.
 */

//Preprocessor --> including the iostream file into this file.
#include <iostream>

//Specifying to use the std namespace.
using namespace std;

//Entry point (driver function) of the program.
int main() {
    //Declare two strings and assgign them with the user's name and the product's name.
    string name = "Sean";
    string product = "Ghirardelli Dark Chocolate Brownie";

    //Declare 3 double variables and store the calories, fat, and carbohydrates for each serving.
    int calories = 140;
    double fat = 3.5;
    int carbohydrates = 25;

    //Declare a variable that stores the number of servings.
    int numOfServing = 3;

    //Calculate the total calories, fat, and carbohydrates and store them into variables.
    int totalCalories = calories * numOfServing;
    double totalFat = fat * numOfServing;
    int totalCarbohydrates = carbohydrates * numOfServing;

    //Print out the user's name, product's name, and total calories, fat, and carbohydrates for 3 servings.
    cout << "Name: " << name << '\n';
    cout << "Product Name: " << product << '\n';
    cout << "Total Calories For " << numOfServing << " Servings: " << totalCalories << '\n';
    cout << "Total Fat For " << numOfServing << " Servings: " << totalFat << '\n';
    cout << "Total Carbohydrates For " << numOfServing << " Servings: " << totalCarbohydrates << '\n';

    return 0;
}
