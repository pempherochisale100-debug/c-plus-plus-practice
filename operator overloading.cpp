
#include <iostream>
#include <string>
#include <limits>

	using namespace std;
	
		class Marks {
			
			private:
				// marks variables for the first student
				float mark_1, mark_2;
				// marks variables for the second student 
				float m_1, m_2;
				
			public :
				
				void get_details () {
					cout << "Enter two marks for the first student: " << endl;
						if (!(cin >> mark_1 >> mark_2) || mark_1 < 0 || mark_2 < 0) {
							cin.clear();
							cerr << "ERROR: Invalid input detected \n";
							cin.ignore(numeric_limits<streamsize>::max (), '\n');
							mark_1 = 0.0;
							mark_2 = 0.0;
						}
						cin.ignore(numeric_limits<streamsize>::max (), '\n');
						
					cout << "Enter two marks for the second student: " << endl;
						if (!(cin >> m_1 >> m_2) || m_1 < 0 || m_2 < 0)  {
							cin.clear();
							cerr << "ERROR: Invalid input detected \n";
							cin.ignore(numeric_limits<streamsize>::max (), '\n');
							m_1 = 0.0;
							m_2 = 0.0;
						}
						cin.ignore(numeric_limits<streamsize>::max (), '\n');
				}
				
			float get_first_mark () {
				return this->mark_1;
			}	
			
			float get_second_mark () {
				return this->mark_2;
			}
			float get_third_mark () {
				return this->m_1;
			}
			float get_fourth_mark() {
				return this->m_2;
			}
			
			Marks operator+ ( Marks& modifier) {
				Marks place_holder;
				
				place_holder.mark_1 = mark_1 + modifier.get_first_mark () + modifier.get_second_mark();
				place_holder.mark_2 = mark_2 + modifier.get_first_mark () + modifier.get_second_mark();
				place_holder.m_1 = m_1 + modifier.get_third_mark() + modifier.get_fourth_mark();
				place_holder.m_2 = m_2 + modifier.get_third_mark() + modifier.get_fourth_mark();
				
				return place_holder;
				
			}
			
			float add_marks () {
				Marks mark_add = get_first_mark() + get_second_mark ();// + m_1 + m_2;
				return mark_add;
			}
			
			float average () {
				return add_marks () / 4.0;
			}
			
			void display_results ()  {
			/*	Marks result = mark_1 + mark_2;
				float average = result / 2.0;
				Marks result_2 = this->m_1 + this->m_2;
				float average_2 = result_2 / 2.0;
				
				float total_totals = result + result_2;
				float total_average = average + average_2;  */
				
				cout << "Total marks = " << add_marks () << endl;
				cout << "Total average = " << average () << endl;
				
			}
				
				
				
				
				
		};
		
		
		
		
		
		
		int main () {
			
			
			Marks mark;
			mark.get_details();
			
			mark.display_results();
			
			
			
			
			
			
			
			
			
			
			
			
			system ("pause>0");
				return 0;
		}