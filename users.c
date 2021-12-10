include<stdio.h>
#include<string.h>

int buscar(char *str1, char *str2); 

void main(){
        char user[20];
        char password[20];
        char linea[40];
        FILE* archivo;
        int userbool = 0;
        const char s[2] = ";";
        char* token;
        char temp;

        printf("\nUser:\n");
        scanf("%s", user);
        archivo = fopen("Users.txt", "r");
        if(archivo!=NULL){
                while (fgets(linea, sizeof(linea), archivo) != NULL) {
                        if(buscar(linea, user)){
                                token = strtok(linea, s);
                                if(strcmp(token, user) == 0){
                                        printf("Usuario encontrado\n");
                                        userbool = 1;
                                break;}
        }}
        if(userbool){
                token = strtok(NULL, s);
                if (token[strlen(token)-1] == '\n')
                        token[strlen(token) - 1] = 0;
                char password[20];
                printf("\nPassword:\n");
                scanf("%c", &temp);
                scanf("%[^\n]", password);
                if(strcmp(password, token) == 0){
                        printf("Password correcta");
                }
                else{
                        printf("Password incorrecta");
                }
        }
        else{
                printf("Usuario No encontrado");
        }

}}
int buscar(char *str1, char *str2){
        int i= 0;
        int len1 = strlen(str1);
        int len2 = strlen(str2);
        char c = str2[0];
        while(i < len1){  
                if(str1[i] == c){
                if(strncmp(&str1[i], str2, len2) == 0){
                        return 1;
                }}
                i++;
        }
        return 0;
}

