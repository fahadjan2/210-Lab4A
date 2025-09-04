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

    vector<Color> colors;

    for (int i = 0; i < n; i++){
        int randRed = rand() % 255;
        int randGreen = rand() % 255;
        int randBlue = rand() % 255;
        
        Color tempColors = {randRed, randGreen, randBlue};
        colors.push_back(tempColors);
    }


    cout << "e" << endl;
    //cout << colors[1].red << colors[1].green << colors[1].blue << endl;
}