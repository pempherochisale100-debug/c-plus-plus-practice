#include <iostream>
#include <string>

	using namespace std;
	
		class Vehicle {
			string vehicle_type;
			
		public:
			
			// the public constructor
			Vehicle (string type = "" ) : vehicle_type (type) {
				
			}
			
			void set_type () {
				cout << "Enter vehicle type: "<< endl;
					getline (cin, this->vehicle_type);
					
					if (vehicle_type.empty()) {
						cout << "You entered nothing \n";
					}
					
			}
			
			string get_type () {
				return this->vehicle_type;
			}
			
			virtual void display_cost () {
				cout << "Implementation from the parent class for " << this->vehicle_type << endl ;
			}
		};
		
		class Car : public Vehicle {
			
			private:
				int rental_period;
				double rental_rate;
				
			public:
				
				Car (string type = "", int rent = 0, double rate = 0.0) : Vehicle (type), rental_period (rent), rental_rate (rate) {
					
					
				}
				
				void set_car_details () {
					set_type ();
					cout << "Enter rental period for : " << endl;
						cin >> this->rental_period;
						cin.get();
						
					cout << "Enter a rental rate     : " << endl;
						cin >> this->rental_rate;
						cin.get();
						
				}
				
				float calculate_cost () {
					
					return this->rental_period * this->rental_rate;
				}
				
				void display_cost () override {
					cout << "Vehicle type  => " << get_type () << endl;
					cout << "Rental period => " << this->rental_period << endl;
					cout << "Rental rate   => " << this->rental_rate << endl;
					cout << "Total cost    => " << calculate_cost () << endl;
				}
				
				
		};
		
		
		class Bus : public Vehicle {
			private:
				int rental_period;
				double rental_rate;
				
			public:
				
				Bus (string type = "", int period = 0, double rate = 0.0) : Vehicle (type), rental_period (period), rental_rate (rate) {
					
				}
				
				void get_bus_details () {
					
					set_type ();
					
					cout << "Enter rental period for the bus: " << endl;
						cin >> this->rental_period;
						cin.ignore();
					cout << "Enter rental rate for the bus  : " << endl;
						cin >> this->rental_rate;
						cin.ignore();
				
				}
				
				float calculate_cost () {
					return this->rental_period * this->rental_rate;
				}
				
				void display_cost () override {
					cout << "Vehicle type  => " << get_type () << endl;
					cout << "Rental period => " << this->rental_period << endl;
					cout << "Rental rate   => " << this->rental_rate << endl;
					cout << "Total cost    => " << calculate_cost () << endl;	
				}
		};
		
		
		int main () {
			
			Vehicle vehicle;
			vehicle.display_cost();
			
			cout << endl;
			
			Car car;
			car.set_car_details();
			car.display_cost();
			
			cout << endl;
			
			Bus bus;
			bus.get_bus_details();
			bus.display_cost();			
			
			
			return 0;
		}
		
		
		
		
		
		
		
		
		
		
		