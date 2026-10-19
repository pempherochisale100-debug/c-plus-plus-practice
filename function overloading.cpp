
#include <iostream>
#include <string>
#include <cmath>

	using namespace std;
	
		float calculate_area ( float length, float width); // this is for arectangle
		float calculate_area (float radius); // this is for a circle
		float calculate_area (float base, float height, char type); // for a triangle
		
			int main () {
				
			float rect = calculate_area (10.0, 10.0);
			float cir = calculate_area (5.0);
			float tria = calculate_area (10.0, 10.0, 'E');
				
			cout << "Area of rectangle = " << rect << endl;
			cout << "Area of circle    = " << cir << endl;
			cout << "Area of triangle  = " << tria << endl;	
				
				
				system ("pause>0");
					return 0;
			}
			
			
			
			
			
		float calculate_area ( float length, float width) {
			
			return length * width;
			
		}
		
		float calculate_area (float radius) {
			
			return M_PI * pow (radius, 2);
			
		}
		
		float calculate_area (float base, float height, char type) {
			
			return (1.0/2.0) * base * height ;
			
		}