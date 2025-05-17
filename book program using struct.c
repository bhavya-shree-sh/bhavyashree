#include <stdio.h>
struct book{
    char name[20];
    char writer_name[40];
    int price;
};
struct book b;
int main(){
    printf("enter book name\n");
    scanf("%s",&b.name);
    printf("enter writers name\n");
    scanf("%s",&b.writer_name);
    printf("enter book price\n");
    scanf("%s",&b.price);
    printf("name:%s\nwriters name:%s\nprice:%d",b.name,b.writer_name,b.price);
    
    
}

enter book name
ramayana
enter writers name
valmiki
enter book price
1590
name:ramayana
writers name:valmiki
price:809055537

=== Code Execution Successful ===
