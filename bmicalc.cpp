#include <iostream>
using namespace std;

int main(){
    // this program calculates bmi and checks if is less 18.5 is underweigth, if greater than 25 is overweigth,
    // and if is btwn 18.5 and 25 is normal
    float weight,height, bmi;
    weight = 65, height = 1.6;
    bmi = weight/(height * height);

    if (bmi < 18.5){
        cout << "Underweight"<<endl;
}
    else if(bmi > 25 ){
        cout << "Overweight"<<endl;
    
    }else{
        cout << "Normal weight";
}
    cout << bmi;
}
