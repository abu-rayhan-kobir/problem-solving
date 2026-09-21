# include <iostream>
# include <vector>

int maxSubArraySum (std :: vector <int>& numbers);
int max (int number1, int number2);

int main () {
  std :: vector <int> numbers = {1, 2, 3};
  int maxSum = maxSubArraySum (numbers);
  std :: cout << "Maximum sum: " << maxSum << std :: endl;
  return 0;
}

int max (int number1, int number2) {
  if (number1 > number2) {
    return number1;
  } else if (number2 > number1) {
    return number2;
  } else {
    return number1;
  }
}

int maxSubArraySum (std :: vector <int>& numbers) {
  int maxSum = INT_MIN;
  for (int start = 0; start < numbers.size (); start++) {
    for (int end = start; end < numbers.size (); end++) {
      int currentSum = 0;
      for (int count = start; count <= end; count++) {
        currentSum += numbers.at (count);
      }
      maxSum = max (currentSum, maxSum);
    }
  }
  return maxSum;
}