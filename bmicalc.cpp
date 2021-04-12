#include <iostream>
using namespace std;

int main(){
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