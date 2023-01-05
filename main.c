/*Generate a random test article*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MAX_WORD 1000

int word_num;
FILE *article_arcd;
FILE *article_huff;
char str1[100] = "./arcd/"; /*Save the file in arcd folder*/
char str2[100] = "./huffman/"; /*Save the file in huffman folder*/

int main(int argc, char **argv){

    int i;
    int cmd_opt =0 ;
    extern char *optarg;

    srand(time(NULL)); /*Initial the random seed*/
    word_num = rand() % MAX_WORD; /*Set the maximum number of the words*/
    
    while((cmd_opt = getopt(argc, argv, "o:")) != -1){

        switch(cmd_opt){

            case 'o': /*User use -o FILE_NMAE.txt to name the file*/

                strcat(str1, optarg);
                strcat(str2, optarg);
                
                if((article_arcd = fopen(str1,"w+"))!=NULL){
                    if((article_huff = fopen(str2,"w+"))!=NULL){

                        for(i=word_num; i>= 0; i--){
                            if((i % 93-48) >= 0 && (i % 93-48) <= 42){
                                fprintf(article_arcd, "%c", (i % 93));
                                fprintf(article_huff, "%c", (i % 93));
                            }

                            else if((i % 93-48) == 43){
                                fprintf(article_arcd, " ");
                                fprintf(article_huff, " ");
                            }

                            else if((i % 93-48) == 44){
                                fprintf(article_arcd, "\n");
                                fprintf(article_huff, "\n");
                            }
                        }
                    }

                    fclose(article_huff);
                }

                fclose(article_arcd);
                break;
        }
    }
        
    return 0;
}