# include <iostream>

using namespace std;

int main( ) 
{ 
    double PI = 3.141592;                // variables can be initialized during declaration 
    double rad; 
    cout<< "Enter the radius in m: "; 
    cin>>rad; 
    cout<< "Area of the circle is (in m2): "<< PI * rad * rad<<endl; 
    return 0;
}  
