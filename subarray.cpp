/*

(1) => Subarray হলো একটি array-এর এমন একটি অংশ, যেখানে element-গুলো অবশ্যই পরপর (contiguous) থাকতে হবে। 
(2) => Subarray = Continuous part of an array

array = [1, 2, 3]
array size = n
total sub array = (n) * (n + 1) / 2
{
total sub array:
(1), (2), (3)
(1, 2), (2, 3)
(1, 2, 3)
}

not sub array:
(1, 3) => no contiguous part of an array, 2 missing
*/

# include <iostream>
# include <vector>

void totalSubArray (std :: vector <int>& numbers);

int main () {
  std :: vector <int> numbers = {1, 2, 3};
  totalSubArray (numbers);
  return 0;
}

void totalSubArray (std :: vector <int>& numbers) {
  for (int start = 0; start < numbers.size (); start++) {
    for (int end = start; end < numbers.size (); end++) {
      for (int count = start; count <= end; count++) {
        std :: cout << numbers.at (count);
      }
      std :: cout << " ";
    }
    std :: cout << std :: endl;
  }
  return;
}