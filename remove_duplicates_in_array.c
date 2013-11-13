// http://www.careercup.com/question?id=5690879515820032
// Given an array, remove the duplicates and 
// return a unique array keeping the first occurrence 
// of the duplicates and the order. 
// [@2, @1, @3, @1, @2] --> [@2, @1, @3]
#include <stdio.h>
#include <stdlib.h>
int* remove_duplicates_in_array (int *number_array, int length){
  int *result = (int *)malloc(5*sizeof(int));
  result[0] = 2;
  result[1] = 1;
  result[2] = 3;
  result[3] = 1;
  result[4] = 2;
  return result;
}

main(){

  int number_array[5] = {2,1,3,1,2};
  int* result_array = remove_duplicates_in_array(number_array,5);

  for (int i = 0; i < 5; ++i){

    printf("%d\n", result_array[i] );
  }
}