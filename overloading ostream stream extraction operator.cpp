
#include <iostream>
#include <string>

	using namespace std;
	
		class Rectangle {
			private:
				int length;
				int width;
				
			public:
				
				Rectangle (int l, int w) : length (l), width (w) {
					
				}
				
				friend ostream& operator<< (ostream& out_stream, const Rectangle& rect) ;
				
		};
		
		ostream& operator<< (ostream& out_stream, const Rectangle& rect) {
			out_stream << "Rectangle = " << rect.length << " * " << rect.width << endl;
			return out_stream;
		}
		
			int main () {
				
				Rectangle r (10, 20);
				
				cout << r << endl;
				
				
				system ("pause>0");
					return 0;
			}