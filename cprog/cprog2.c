#include <stdio.h>
int main() {
    float length=44;
    float a_c,a_s,sl,r;
    r=(length/44)*7;
    a_c=(22/7)*r*r;
    sl=length/4;
    a_s=sl*sl;
    printf("radius: %.2f \n",r);
    printf("area of circle: %.2f \n",a_c );
    printf("side length of square: %.2f \n",sl);
    printf("area of square: %.2f \n",a_s);
    if (a_c>a_s){
        printf("area of circle is more than area of square");
    }
    else{
        printf("area of square is more than area of circle ");
    }
    return 0;
}
