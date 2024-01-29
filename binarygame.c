#include<stdio.h>
#include<string.h>
int main(){
int a = 1;
printf("Table 1:\n");
for(int i=0; i<5; i++){
    for(int j=1; j<=3; j++){
        if(a==11){
            printf("%d ",a);
            a+=2;
            continue;
        }
        if(i<2){
            printf(" %d ",a);
        }
        else printf("%d ",a);
        a+=2;
    }
    printf("\n");
}
printf("\n");
printf("Table 2:   ");         printf("Table 3:   ");    printf("Table 4:   ");    printf("Table 5:   \n");
printf(" 2  3  6   ");         printf(" 4  5  6   ");    printf(" 8  9 10   ");    printf("16 17 18   \n");
printf(" 7 10 11   ");         printf(" 7 12 13   ");    printf("11 12 13   ");    printf("19 20 21   \n");
printf("14 15 18   ");         printf("14 15 20   ");    printf("14 15 24   ");    printf("22 23 24   \n");
printf("19 22 23   ");         printf("21 21 23   ");    printf("25 26 27   ");    printf("25 26 27   \n");
printf("26 27 30   ");         printf("28 29 30   ");    printf("28 29 30   ");    printf("28 29 30   \n");
printf("\n\n");
printf("Think of a number between 1 to 31 in your mind !");
int sum=0;
int m = 1;
printf("Type y if found and n if not Found !\n");
for(int i=1; i<=5; i++){
    printf("Does your number Found in table %d ? : ",i);
    char ch;
    scanf("%c",&ch);
    while(getchar()!='\n');
    if(ch=='y') sum+=m;
    m*=2;
}
printf("You think of number %d.",sum);
    return 0;
}