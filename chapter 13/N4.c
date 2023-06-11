#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* to_str(int *str_size,unsigned int *arr){
  int ptr_length = 5;
  int length[3] = { 1,1,1 };
  int m = 1;
  for(int i = 0; i < 3; i++){//자릿수 구하기
    m = 10;
    while(1){
      if(arr[i] / m != 0){
        length[i]++;
        m *= 10;
        ptr_length++;
      }
      else{
        break;
      }
    }
  }
  *str_size = ptr_length;
  double n = 1;//나눌값 , int형 문자열 변환
  char* ptr = (char*)malloc(sizeof(int) * ptr_length);
  int t = 0;
  for(int i = 0; i < 3; i++){
    int n = 1;
    while (1){
      int tmp = 0;//뜯어낸 숫자값
      if(length[i] != 1){
        for (int j = 1; j < length[i]; j++){
          n *= 10;
        }
      }

      for(int j = 0; j < length[i]; j++){//10단위일씨 2번   
        if(arr[i] !=0){
          tmp = arr[i] / n;//10 /10   0
          arr[i] = arr[i] - (tmp * n);
          ptr[t] = (char)tmp + '0';

          n = n / 10;
        }
        else{
          ptr[t] = '0';
        }
        t++;
      }
      break;
    }
    ptr[t] = ' ';
    t++;
  }
  ptr[t-1] = '\0';
  return ptr;
}


int main() {
  unsigned int arr[3];
  scanf("%u %u %u", arr, arr + 1, arr + 2);

  int str_size;
  char* str = to_str(&str_size, arr);
  printf("str_size: %d\n", str_size);
  printf("%s\n", str);
  free(str);
  return 0;
}