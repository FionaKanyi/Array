#include <iostream>
using namespace std;

int main(){
    //declaring and initializing the product of the numbers in the array.
    int mynums[]={10,20,30,40,50,60,70,80,90,100};
    int product=1;
    for (int i=0; i<10; i++){
        product = product * mynums[i];
    }
    cout<<"The product of array elements is: "<<product;
    return 0;
}