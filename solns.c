/* Enter your solutions in this file */
#include <stdio.h>

// Function for max

int max(int arry [], int N ) {
  
  int maxx = arry[0];
  for(int i = 0; i < N; i++){
    if (arry[i] > maxx) {
    maxx = arry[i];
    }
   } 
   
    return maxx;
    
  }    

// Function for finding min

int min(int arry [], int N ) {
  
  int minimum= arry[0];
  for(int i = 0; i < N; i++){
    if (arry[i] < minimum) {
    minimum= arry[i];
    }
   } 
   
    return minimum;
    
 }


//Function for finding average

float average(int avg[], int N) {
 int summation = 0;

 for(int i = 0; i < N ; i++) {
 summation += avg[i];
    }
     
     float avrg = (float) summation/N ;
     return avrg;
}
