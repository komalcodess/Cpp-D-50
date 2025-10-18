#include <stdio.h>
int main(){
int n, digit, sum=0, count=0;
for(n=1000; n<=9999; n++){
    sum=0;
    int temp=n;

for(int i= temp; i>0; i=i/10){
    digit = i%10;
    sum= sum + digit;
}
if(sum%2==0){
    count++;
}
printf("The number of four digit numbers whose digit sum is even: %d\n", count);

}
