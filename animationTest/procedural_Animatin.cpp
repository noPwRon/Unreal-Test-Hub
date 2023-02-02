#include <math.h>>

int main(){

    // Response values
    float y[0]; // position
    float y_dot[0]; // velocity
    float y_ddot; // acceleration
    float T; // time step
    int n=0;
    float k_1, k_2, k_3;

    // Object values
    float x;
    float x_dot;
    float x_ddot;

    // while(true){

    //     // determine the next position
    //     y[n+1] = y[n]+T*y_dot[n];


    //     y_ddot = (x*[n+1]+k_3*x_dot[n+1] - y[n+1] - k_1*y_ddot[n])/k_2

    //     y_dot[n+1]=y_dot[n]+T*y_ddot;
    //     n++;
    // }

    return 0;
    
}

bool stability_check(float T, float k_2, float k_1, float k_3){
    bool isValid;

    isValid = T < sqrt((k_2*4)+(k_1^2))-k_1;
    return isValid;

}