#include<stdio.h>
void print(int ID, int count){
    if(ID < 0 || count == 2)    return;

    printf("March Forward ID = %d\n", ID);
    print(ID % 3, ++count);
    printf("March Backward ID = %d\n", ID);
    
}
int main(){
    int ID;
    scanf("%d", &ID);

    for(int i = 0, j = 10; i < j; i *= 3, j -= 4){
        print(ID, 0);
        printf("Recurvi\n");
    }
}