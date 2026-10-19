#include <iostream>
#include <string>
#include <limits>

	using namespace std;
	
		class Student {
			private:
				
				float first_m, second_m;
				float m1, m2, m3;
				
			public:
				
				void set_details ()  {
					cout << "Enter two marks forf the first student: ";
						if (!(cin >> first_m >> second_m ) || first_m < 0 || second_m < 0) {
							cin.clear();
							cerr << "ERROR: Invalid input detected \n";
							cin.ignore(numeric_limits<streamsize>::max (), '\n');
							first_m = 0.0;
							second_m = 0.0;
						}
						cin.ignore(numeric_limits<streamsize>::max (), '\n');
						
					cout << "Enter three grades for the second student: ";
							if (!(cin >> m1 >> m2 >> m3 )) {
								cin.clear();
								cerr << "ERROR: Invalid input detected \n";
								cin.ignore(numeric_limits<streamsize>::max(), '\n');
								m1 = 0.0;
								m2 = 0.0;
								m3 = 0.0;
							}
							cin.ignore(numeric_limits<streamsize>::max (), '\n');
							
						
						
						
				}
				
			float get_first_mark () {
				return this->first_m;
			}
			
			float get_second_mark () {
				return this->second_m;
			}
			
			float get_third_mark () {
				return this->m1;
			}
			float get_fourth_mark () {
				return this->m2;
			}
			float get_fifth_mark () {
				return this->m3;
			}
				
			float calculate_average (float f_m, float s_m) {
			
				float sum = f_m + s_m;
				
				return sum / 2.0;
			}
			
			float calculate_average (float m_1, float m_2, float m_3) {
		
				float summation = m_1 + m_2 + m_3;
				
				return summation / 3.0;
			}
			
			void display_details () {
				
				float first_average = calculate_average (get_first_mark (), get_second_mark());
				float second_average = calculate_average (get_third_mark(), get_fourth_mark (), get_fifth_mark ());
				
				cout << "Average for the first student = " << first_average << endl;
				cout << "Average for the second student = " << second_average << endl;
			}
		};
		
		int main () {
			
			Student student;
			
			student.set_details();
			
			student.display_details();
			
			
			
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		