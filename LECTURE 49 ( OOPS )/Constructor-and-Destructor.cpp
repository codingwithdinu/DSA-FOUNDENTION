// Constructor
// -> used to initialize an object
// -> this is fn which is called when an object is created 
// -> same name as class name
// -> types 1. Default
//          2. Parameterised
//          3. Copy

// Destructor
//-> function is called when object is deleted
//-> cannot pass any parameters
//-> name  ~(class name)



#include <iostream>
using namespace std; 

class Rectangle{
    public:
        int l;
        int b;
        
        Rectangle(){ // Default Constructor
            l=0;
            b=0;
        }

        Rectangle(int x , int y){  // Parameterised Constructor
            l=x;
            b=y;
        }

        Rectangle(Rectangle &r){ // Copy Constructor
            l=r.l;
            b=r.b;
        }

        ~Rectangle(){
            cout<<"Destructor is called"<<endl;  // Destructor Calling
        }
};
int main(){
    Rectangle *r1 = new Rectangle();
    cout<<r1->l<<" "<<r1->b<<endl;
    delete r1;

    Rectangle r2(3,4);
    cout<<r2.l<<" "<<r2.b<<endl;

    Rectangle r3 = r2;
    cout<<r3.l<<" "<<r3.b<<endl;

}




