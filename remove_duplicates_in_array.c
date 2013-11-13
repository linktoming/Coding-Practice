// http://www.careercup.com/question?id=5690879515820032
// Given an array, remove the duplicates and 
// return a unique array keeping the first occurrence 
// of the duplicates and the order. 
// [@2, @1, @3, @1, @2] --> [@2, @1, @3]
#include <stdio.h>
int[] remove_duplicates_in_array (int[] number_array, int length){
  return [2,1,3,1,2];
}

main(){

  int number_array[] = [2,1,3,1,2];
  int result_array[] = remove_duplicates_in_array(number_array,5);

  for (int i = 0; i < sizeof(result_array)/sizeof(result_array[0]); ++i){

    printf("%d\n", result_array[i] );
  }
}