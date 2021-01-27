#include <iostream>
using namespace std; 
int main()
{
    enum Color
    {
        color_red, // color_red is placed in the same scope as Color
        color_blue
    };
 
    enum Fruit
    {
        fruit_banana, // fruit_banana is placed in the same scope as Fruit
        fruit_apple
    };
	
    Color color{color_red }; // Color and color_red can be accessed in the same scope (no prefix needed)
	//cout<<color<<endl;
    Fruit fruit{ fruit_banana }; // Fruit and fruit_banana can be accessed in the same scope (no prefix needed)
 
    if (color == fruit) // The compiler will compare a and b as integers
        cout << "color and fruit are equal\n"; // and find they are equal!
    else
        cout << "color and fruit are not equal\n";
 
    return 0;
}
