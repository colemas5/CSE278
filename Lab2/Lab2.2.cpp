#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>


int main(){

//get the radius of circle
int r = 0;
std::cout << "Enter radius: ";
std::cin >> r;

//compute the perimeter
float perimeter = 2 * M_PI * r;
std::cout << "The perimeter  is " <<perimeter<< std::endl;

//compute the area
float area = M_PI * r * r;
std::cout << "The area  is " <<area<< std::endl;

return 0;

}
