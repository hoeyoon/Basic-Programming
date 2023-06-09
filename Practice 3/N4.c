#include <stdio.h>

void get_str_array(char *istr,char year[], char mouth[], char day[]){
  int i = 0, j = 0, t = 0;
  int chek[3] = { 0, };
  while(j < 3){
    if(istr[i] < '0' || istr[i] > '9'){
      chek[j] = i;
      j++;
    }
    i++; 
  }

  for(int i = chek[0]-1; i >= 0; i--){
    if(chek[0] > 3){
      if(istr[i] < '0' || istr[i] > '9'){
        year[i] = '0';
      }
      else{
        year[i] = istr[i];
      }
    }
    else if(chek[0] == 3){
      if(istr[i] < '0' || istr[i] > '9'){
        year[i] = '0';
      }
      else{
        year[i + 1] = istr[i];
      }
    }
    else if(chek[0] == 2){
      if(istr[i] < '0' || istr[i] > '9'){
        year[i] = '0';
      }
      else{
        year[i + 2] = istr[i];
      }
    }
    else if(chek[0] == 1){
      if(istr[i] < '0' || istr[i] > '9'){
        year[i] = '0';
      }
      else{
        year[i + 3] = istr[i];
      }
    }
  }
  j = 1;
  for(int i = chek[1] - 1; i > chek[0]; i--){
    mouth[j] = istr[i];
    if (istr[i] < '0' || istr[i] > '9'){
      mouth[j] = '0';
      j--;
    }
    else{
      mouth[j] = istr[i];
      j--;
    }
  }
  j = 1;
  for (int i = chek[2]-1; i > chek[1]; i--){
    if (istr[i] < '0' || istr[i] > '9'){
      day[j] = '0';
      j--;
    }
    else{
      day[j] = istr[i];
      j--;
    }
  }
}

int main(void)
{
   char istr[512];
   scanf("%[^\n]s", istr);
   char year[5] = "0000";
   char mouth[3] = "00";
   char day[3] = "00";
   get_str_array(&istr, &year, &mouth, &day);

   printf("%s.%s.%s\n", year, mouth, day);
}