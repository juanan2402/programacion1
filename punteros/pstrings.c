#include<stdio.h>

int comparacion(char* pal1, char* pal2){
  while(*pal1 && *pal2){
    if(*pal1 != *pal2){
      return 0;
    }
    pal1++;
    pal2++;
      if(*pal1=='\0' && *pal2 == '\0'){
        return 1; 
      }
  }
}
