//COMSC-210 | Lab 4A | Fahad Fawad Ahmad
//IDE used: Visual Studio
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Color{
    int red;
    int green;
    int blue;
};

int main(){
    srand(time(0));
    int n = rand() % 50 + 25;
    int numberOfValues;

    vector<Color> colors;
    
    for (int i = 0; i < n; i++){
        int randRed = rand() % 255;
        int randGreen = rand() % 255;
        int randBlue = rand() % 255;
        
        Color tempColors = {randRed, randGreen, randBlue};
        colors.push_back(tempColors);

        numberOfValues++;
    }

    //Printing
    cout << "Color#\tR Value\tG Value\tB Value\n-------\t-------\t-------\t-------" << endl;
    for (int i = 0; i < numberOfValues; i++){
        cout << "  " << i << " \t  " << colors[i].red << "\t  " << colors[i].green << "\t  " << colors[i].blue << endl;
    }
}