#include <iostream>
#include <string>

	using namespace std;
	
	
		class Count {
			
			private:
				int value;
				
			public:
				
				Count (int val = 5) : value (val) {
					
				}
				
				Count& operator++ () {
					
					value++;
					return *this;
				}
				
				int get_value () const {
					
					return value;
					
				}
		};
		
			int main () {
				
				Count my_count;
				
				cout << "The initial value = " << my_count.get_value() << endl << endl;
				
				++my_count;
				
				cout << "The final value = " << my_count.get_value() << endl << endl;
				
				
				
				system ("pause>0");
				return 0;
			}