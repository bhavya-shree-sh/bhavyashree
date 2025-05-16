enter the name :bhavya
enter the city:nagavalli
enter the pin :572120

person details:
name:bhavya
pin: 572120
city:nagavalli

#include <stdio.h>

int main() {
    struct address{
        char city[50];
        int pin;
    };
    struct person{
        char name[50];
        struct address addr;
    };
    struct person p;
          printf("enter the name :");
          scanf("%s", &p.name);
           printf("enter the city:");
          scanf("%s", &p.addr.city);
           printf("enter the pin :");
          scanf("%s", &p.addr.pin);
          printf("\nperson details:\n");
          printf("name:%s\npin:%d\ncity:%s\n",p.name,p.addr.pin,p.addr.city);
}
          




