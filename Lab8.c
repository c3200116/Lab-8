


#include<stdio.h>
#include<math.h>


void zeroInt(int *x);
void swap(int *a, int *b);
void mean(int *a, int *b, int *c);


int main(){
    
//-----------------------------//

    /* TASK 1 - ZERO AN INT
    int x=27;
        
    printf("%d\n", x);
    zeroInt(&x);
    printf("%d\n", x);
    */
   
//-----------------------------//

    /* TASK 2 - SWAP 2 INTS
    int a=27, b=101;
    
    printf("%d : %d\n", a, b);
    swap(&a, &b);
    printf("%d : %d\n", a, b);
    */
   
//-----------------------------//

    /*TASK 3 - MEAN OF 3 NUMBERS, THEN ZERO
    int a=2, b=4, c=6;
    
    printf("%d : %d : %d\n", a, b, c);
    mean(&a, &b, &c);
    printf("%d : %d : %d\n", a, b, c);
    */
   
//-----------------------------//

    /*TASK 4 - CALCULATE MEAN OF INITILISED 2D ARRAY   
    float myArray[3][3] = { {0.1, 0.2, 0.3}, {1.1, 1.2, 1.3}, {2.1, 2.2, 2.3} };
    int x=0, y=0, count=0; 
    float tmp=0;
    
        for (x=0;x<3;x++){
            for(y=0;y<3;y++){
                tmp=tmp + myArray[x][y];
                count++;
            }
        }

            printf("tmp = %f\n", tmp);
            tmp=tmp/count;
            printf("mean = %f\n", tmp);
        */
       
//-----------------------------//
       
       //TASK 5 - COPY DATA INTO ARRAY FROM FILE, PRINT THE LARGEST VALUE IN THE ARRAY
       
       int arrayData[3][3];
       int x=0, y=0;
      FILE *input;
      input=fopen("input.txt", "r");
      
      for (x=0;x<3;x++){
          for(y=0;y<3;y++){
              fscanf(input, "%d", &arrayData[x][y]);
          }
      }
      int tmp=0, x1=0, y1=0;
      
      for (x=0;x<3;x++){
          for(y=0;y<3;y++){
              if (arrayData[x][y]>tmp){
                  tmp=arrayData[x][y];
                  x1=x;
                  y1=y;
              }
        }
    }
        
        printf("Largest value found : %d\n", tmp);
        printf("At index : arrayData[%d][%d]\n", x1, y1);


      
    return 0;
    
}


//FUNCTIONS
//---------------------------//
//returns mean of 3 ints to a, zeros b and c
void mean(int *a, int *b, int *c){

    *a=(round((*a+*b+*c)/3.0));
    *b=0;
    *c=0;
}

//---------------------------//
//swaps 2 integers
void swap(int *a, int *b){
    int tmp=0;
    tmp=*a;
    *a=*b;
    *b=tmp;
}

//--------------------------//
//zeros an interger
void zeroInt(int *x){
    
    *x=0;
}