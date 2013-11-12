// http://www.careercup.com/question?id=5177378863054848
// Write a function for retrieving the total number of substring palindromes. 
// For example the input is 'abba' then the possible 
// palindromes= a, b, b, a, bb, abba 
// So the result is 6. 
int number_of_palindromes (char *word, int length){

    int count = length;

    for (int i = 0; i < length; i++){
        for (int j = i+1; j < length, j++){
          int left = i;
          int right = j;
          while(word[left]==word[right]&&left<=right){

            left++;
            right--;
          }
          


        }
    }

    return count
}