#include <stdio.h>
void convert();
int main(){
convert();
return 0;
}

void convert(){
double c;
for(int f= -16; f <= 105; f++){
        
    c = 5*(f-32)/9.0;
    printf("f = %d, c = %f \n", f,c);

}
}

