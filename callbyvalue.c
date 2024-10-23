#include <stdio.h>

void swap(int x,int y){
int temp;
temp=x;
x=y;
y=temp;
printf("inside swap function: x=%d y=%d\n", x ,y);
}

int main(){
int a=10,b=20;
swap(a,b); //swaped by calling function with values in arguments
printf("after calling swap function: a=%d b=%d", a  ,b);
return 0;
}
Output:
Inside swap function: x=20 y=10
After calling swap function: a=10 b=20
