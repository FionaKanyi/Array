
#include <iostream>
using namespace std;

int main(){
    //declaring and initializing the average of numbers in the array
    int Mynums[]={10,20,30,40,50,60,70,80,90,100};
    int sum=0;
    for (int i=0; i<10; i++){
        sum = sum + Mynums[i];
    }
    cout<<"The average of array elements is: "<<sum/10<<endl;
    return 0;
}