#include<iostream>
#include<string.h>

using namespace std ;

class Hotels {
	
	private :
		
		int hotel_id ;
		char hotel_name[50] ;
		char hotel_type[50] ;
		char hotel_rating[50] ;
		char hotel_location[50] ;
		int hotel_establish_year ;
		int hotel_staff_quantity ;
		int hotel_room_quantity ;
	
	public :
		
		void setter (){
			
			cout<<"Enter ID : ";
			cin>>hotel_id ;
			
			cout<<"Enter Hotel Name : ";
			cin>>hotel_name ;
			
			cout<<"Enter Hotel Type (like hotel or motel) : ";
			cin>>hotel_type ;
			
			cout<<"Enter Hotel Rating (like 1 Star, 2 Start, ..., 7 Star) : ";
			cin>>hotel_rating ;
			
			cout<<"Enter Location (city name) : ";
			cin>>hotel_location ;
			
			cout<<"Enter Hotel Establish Year : ";
			cin>>hotel_establish_year ;
			
			cout<<"Enter Hotel staff quantity : ";
			cin>>hotel_staff_quantity ;
			
			cout<<"Enter Hotel Room quantity : ";
			cin>>hotel_room_quantity ;
			
		}
		
		void getter (){
			
			cout<<hotel_id<<endl ;
			cout<<hotel_name<<endl ;
			cout<<hotel_type<<endl ;
			cout<<hotel_rating<<endl ;
			cout<<hotel_location<<endl ;
			cout<<hotel_establish_year<<endl ;
			cout<<hotel_staff_quantity<<endl ;
			cout<<hotel_room_quantity<<endl ;
		
		}
	
	
};


int main (){
	
	int i , n ;
	
	cout<<"Enter number of hotels towards enter it's data : " ;
	cin>>n ;
	cout<<endl ;
	
	Hotels o[n] ;
	
	for(i=0 ; i<n ; i++){
		
		o[i].setter();
		
		cout<<endl ;
		
	}
	
		
	for(i=0 ; i<n ; i++){
		
		o[i].getter();
	
		cout<<endl ;
		
	}
	
	
	
	
	
	return 0 ;
}
