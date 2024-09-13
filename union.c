
#include <stdio.h>
union book{
int num;
char name[200];
float price;
};
int main(){
    union book hp;
    hp.num=17;
    hp.price=100.00;
    strcpy(hp.name,"harry potter");
    printf("book number is %d\n",hp.num);
    printf("book name is %s\n",hp.name);
    printf("book price is %f\n",hp.price);
}
