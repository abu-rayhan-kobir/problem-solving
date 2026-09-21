# include <iostream>
# include <vector>

int maxSubArraySum (std :: vector <int>& numbers);
int maxValue (int number1, int number2);

int main () {
  std :: vector <int> numbers = {1, 2, 9, -4, 9, -3};
  int maxSum = maxSubArraySum (numbers);
  std :: cout << "Maximum sub array sum: " << maxSum << std :: endl;
  return 0;
}

int maxValue (int number1, int number2) {
  if (number1 > number2) {
    return number1;
  } else if (number2 > number1) {
    return number2;
  } else {
    return number1;
  }
}

int maxSubArraySum (std :: vector <int>& numbers) {
  int currentSum = 0;
  int maxSum = INT_MIN;
  for (int index = 0; index < numbers.size (); index++) {
    currentSum += numbers.at (index);
    maxSum = maxValue (currentSum, maxSum);
    if (currentSum < 0) {
      currentSum = 0;
    }
  }
  return maxSum;
}