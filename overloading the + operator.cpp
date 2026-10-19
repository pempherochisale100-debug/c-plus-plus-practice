
#include <iostream>
#include <string>

	using namespace std;
	
		class Complex_number {
			private:
				
				double number_1;
				double number_2;
				
			public:
				
				Complex_number (double num_1 = 0.0, double num_2 = 0.0) : number_1 (num_1), number_2 (num_2) {
					
					
				}
				
			/*	void set_data_members () {
					double real_number_1, real_number_2;
					double imaginary_number_1, imaginary_number_2;
					
						cout << "Enter a real number and an imaginary part of it: ";
							if (!(cin >> real_number_1 >> imaginary_number_1)) {
								cin.clear();
								cerr << "ERROR: Invalid data you have entered \n";
								cin.ignore(numeric_limits<streamsize>::max(), '\n');
								rea_number_1 = 0.0;
								imaginary_numaer_1 = 0.0;
							}
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							
						Complex_number (real_number_1, imaginary_number_2);
						
						cout << "Enter a real number and an imaginary part of it: ";
							if (!( cin >> real_number_2 >> imaginary_number_2)) {
								
							}
							
						
						
				} */
				
				Complex_number operator+ (const Complex_number& other_number) {
					Complex_number result_holder;
					
					result_holder.number_1 = this->number_1 + other_number.number_1;
					result_holder.number_2 = this->number_2 + other_number.number_2;
					
					return result_holder;
					
				}
				
				void display_details () const {
					
					cout << "Real part " << number_1 << " + imaginary part " << number_2 << "i" << endl; 
 				}
		};
		
			int main () {
				
				Complex_number c1 (4.0, 5.0);
				Complex_number c2 (3.0, 7.0);
				
				Complex_number c3 = c1 + c2;
				
				cout << "c1 => "; c1.display_details(); cout << endl;
				cout << "c2 => "; c2.display_details (); cout << endl;
				cout << "c3 => "; c3.display_details(); cout << endl; 
				
				
				
				
				system("pause>0");
				return 0;
			}
		
		
		
		
		
			