#include <stdio.h>
// SOLUTION FILE

int main()
{
  int var_int;
  char var_char;
  unsigned int var_uint;                    // 2

  unsigned char uchar1, uchar2, sum2,sumu;   // 3
  signed char schar1, schar2, var_schar, sum1, sums;

  int x, y;                       // 4

  char i;                         // 5
  char shift_char;

  int a[10] = {0,10,20,30,40,50,60,70,80,90};    // 6

  int b[10], c[10];               // 7
  int *ip, *ip2;
  int j, k;

  char AString[] = "HAL";           // 8

  // 1 -- change "World" to your name
  printf("\n\n PART 1 ---------\n");

  printf("\n Hello Jazmyn! \n");

  // 2 -- find sizes of the other C datatypes
  printf("\n\n PART 2 ----------\n");

  printf("\n size of data type int = %d ", sizeof(var_int));

  printf("\n size of data type char = %d", sizeof(var_char));

  printf("\n size of data type unsigned int = %d",sizeof(var_uint));

  printf("\n size of data type signed char = %d",sizeof(var_schar)); 
 // 3 -- explore signed versus unsigned datatypes and their interactions
  printf("\n\n PART 3 ----------\n");

  uchar1 = 0xFF;
  uchar2 = 0xFE;
  schar1 = 0xFF;
  schar2 = 0xFE;

  printf("\n uchar1 = %d ", uchar1);
  printf("\n schar1 = %d ", schar1);

  if(uchar1>uchar2){
	printf("\n uchar1 = %d",uchar1);
  }else
	printf("\n uchar2 = %d",uchar2);


  if(schar1>schar2){
        printf("\n schar1 = %d",schar1);
  }else
        printf("\n schar2 = %d",schar2);

  if(schar1>uchar1){
        printf("\n schar1 = %d",schar1);
  }else
        printf("\n uchar1 = %d",schar2);

  sum1 = schar1 + schar2; 
  sum2 = uchar1 + uchar2;
  sumu = schar1 + uchar1;
  sums = schar1 + uchar1;

   printf("\n schar1 + schar2 = %d",sum1);
   printf("\n uchar1 + uchar2 = %d",sum2);
   printf("\n schar1 + uchar1 as an unsigned char = %d",schar1+uchar1);
   printf("\n schar1 + uchar1 as an signed char = %d",sums);
  // 4 -- Booleans
  printf("\n\n PART 4 ----------\n");
	//print out boolean values for true and false
	
  x = 1; y = 2;
  
 

  printf("\n This is a boolean value for true is any nonzero value");


  printf("\n This is a boolean value for false is 0");
	//How big is boolean type in c
  printf("\n The size of a boolean type is %d",sizeof(x&&y));
	//& and && can behave differently
  printf("\n x && y =  %d",x&&y);
  printf("\n x & y =  %d, this operation is bitwise",x&y);

	//~ and ! can behave differently
  printf("\n !y =  %d",!y);
  printf("\n ~y =  %d, this operation is bitwise",~y);


 


  // 5 -- shifts
  printf("\n\n PART 5 ----------\n");

  shift_char = 15;
  i = 1;

  printf("\n shift_char << %d = %d", i, shift_char << i);

  shift_char = 15;
  i = 4;

  printf("\n shift_char << %d = %d", i, shift_char << i);

  shift_char = 15;
  i = 8;

  printf("\n shift_char << %d = %d", i, shift_char << i);



  // 6 -- pointer basics
  printf("\n\n PART 6 ----------\n");

  ip = a;
  printf("\nstart %d", a[0]);
  printf(" %d", *ip);
  printf(" %d", *(ip+1));
  printf(" %d", *ip++);
  printf(" %d", *ip);
  printf(" %d", *(ip+3));
  printf(" %d\n", *(ip-1));

  printf("\nstart %d", *ip);
  printf(" %d", *ip);
  printf(" %d", *(ip+1));
  printf(" %d", *ip);
  printf(" %d", *(ip+1));
  printf(" %d", *(ip+4));
  printf(" %d\n", *ip);


  printf("The size of an integer pointer data type is: %d",sizeof(ip));
  printf("\nip =  %x",ip);
  // 7 -- programming with pointers
  printf("\n\n PART 7 ----------\n");

         x = 10;
  for(j = 0; j < 10; j++){
        b[x-1]=a[j];
	x--;
        }
	printf("\narray b:\n");
  for(j = 0; j < 10; j++){
        printf("\n %d \n",b[j]);
        }
        
        ip = &a[0];
	ip2 = &c[9];
 for(j = 0; j < 10;j++){
        *ip2-- = *ip++;
        }
        printf("\narray c:\n");
  for(j = 0; j < 10; j++){
        printf("\n %d \n",c[j]);
        }

  // 8 -- strings
  printf("\n\n PART 8 ----------\n");

  printf("\n %s \n", AString);

  printf("\n %s \n", AString[4]);
  AString[0]+=1;
  AString[1]+=1;
  AString[2]+=1;

  printf("\n %s \n", AString);
  
  AString[4]+=60;

  printf("\n %s \n", AString);  
// 9 -- address calculation
  printf("\n\n PART 9 ----------\n");
printf("\nCode Fragment 1:\n"); 
 for (k = 0; k < 10; k++){
 b[k] = a[k];         // direct reference to array element
printf("%x\n",&a[k]);
}
printf("\nCode Fragment 2:\n");
  ip = a;
  ip2 = b;
  for (k = 0; k < 10; k++){
 *ip2++ = *ip++;     // indirect reference to array element
printf("%x\n",ip);
}
  // all done
  printf("\n\n ALL DONE\n");
}
