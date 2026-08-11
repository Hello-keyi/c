#include <stdio.h>
#include <string.h>

int check(char *x,char *y) {
    if ((strcmp(x,y)) == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main (){
    char corrent_user[] = "admin";
    char corrent_password[] = "123456";
    char input_user[20];
    char input_password[20];

    for (int i = 0;i<3;i++){
        printf("please input your username:\n");
        scanf("%s",input_user);
        printf("please input your password:\n");
        scanf("%s",input_password);

        if (check(input_user,corrent_user) && check(input_password,corrent_password)){
            printf("login success\n");
            break;
        }
        else if  (check(input_user,corrent_user) == 0) {
            printf("login failed: incorrect username\n");
        }
        else if (check(input_password,corrent_password) == 0){
            printf("login failed: incorrect password\n");
        }
    printf("you have tried 3 times, please try again later\n");
    }
}