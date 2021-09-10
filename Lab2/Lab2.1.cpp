#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>


int main(){

//get the width of rectangle
int w = 0;
std::cout << "Enter width: "; 
std::cin >> w;

//get the height of the rectangle
int h = 0;
std::cout << "Enter height: ";
std::cin >> h;

//compute the perimeter
int perimeter = 2 * (h+w);
std::cout << "The perimeter  is " <<perimeter;

//compute the area
int area = h*w;
std::cout << "The area  is " <<area<< std::endl; 

return 0;

}

