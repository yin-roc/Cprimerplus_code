#include <iostream>


using namespace std;

int main()
{
    char ch;

    cout << "Please enter one of the following choices:" << endl;
    cout << "c) carnivore   p) pianist" << endl;
    cout << "t) tree        g) game" << endl;
    // cin.get(ch);
    cin.get(ch);
    while(ch)
    {
        if(ch == 'c' || ch == 'p' || ch == 't' || ch == 'g')
        {
            
            switch(ch)
            {
                case 'c': cout << "A maple is a carnivore."; break; 
                case 'p': cout << "A maple is a pianist."; break; 
                case 't': cout << "A maple is a tree."; break; 
                case 'g': cout << "A maple is a game."; break; 
                // default : cout << "Please enter a c, p, t, or g: ";
            } 
            break; 
        } 
        if(ch != 'c' && ch != 'p' && ch != 't' && ch != 'g') 
            cout << "Please enter a c, p, t, or g: ";
        cin.get();
        cin.get(ch);  
        
    }



    return 0;
}