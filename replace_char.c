#include<stdio.h>
#define N 255

void replace(char*, char, char);

int main(){
	char data[N], find, ganti;
	printf("Masukkan sebuah string: ");			//input string
    scanf("%[^\n]", data);


    //replace_char
    printf("> Karakter yang dicari: ");			//karakter huruf yang dicari
    getchar();scanf("%c", &find);
	printf("> Karakter pengganti: ");			//karakter pengganti huruf yang dicari
    getchar();scanf("%c", &ganti);

	replace(data,find, ganti);						//pemanggilan fungsi replace
	printf("\nHasil replace: %s\n\n", data);
	return 0;
}

  //replace_char
void replace(char *data, char find, char replace){
int i=0;

while(*data !='\0'){
  /* fungsi merubah karakter */
  *data=((*data == find)?replace:*data);  				//ini semacam bentuk konditional dalam looping
     data++;
    i++;
  }
}
