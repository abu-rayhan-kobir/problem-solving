# include <iostream>
# include <vector>

int majorityElement (std :: vector <int>& numbers);
int main() {
  std :: vector <int> numbers = {1, 2, 2, 1, 1};
  int result = majorityElement (numbers);
  std :: cout << "Majority element is: " << result << std :: endl;
  return 0;
}
int majorityElement (std :: vector <int>& numbers) {
  for (int outer = 0; outer < numbers.size (); outer++) {
    int frequency = 0;
    for (int inner = 0; inner < numbers.size (); inner++) {
      if (numbers.at (outer) == numbers.at (inner)) {
        frequency++;
      }
    }
    if (frequency > numbers.size () / 2) {
      return numbers.at (outer);
    }
  }
}