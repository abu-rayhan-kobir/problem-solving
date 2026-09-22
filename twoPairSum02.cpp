# include <iostream>
# include <vector>

std :: vector <int> twoPairSum (std :: vector <int>& numbers, int target);

int main () {
  std :: vector <int> numbers = {1, 3, 4, 5, 9};
  int target = 14;
  std :: vector <int> result = twoPairSum (numbers, target);
  std :: cout << "{" << result.at (0) << ", " << result.at (1) << "}" << std :: endl;
  return 0;
}

std :: vector <int> twoPairSum (std :: vector <int>& numbers, int target) {
  std :: vector <int> answer;
  int start = 0;
  int end = numbers.size () - 1;
  while (start < end) {
    if (numbers.at (start) + numbers.at (end) > target) {
      end--;
    }
    if (numbers.at (start) + numbers.at (end) < target) {
      start++;
    }
    if (numbers.at (start) + numbers.at (end) == target) {
      answer.push_back (start);
      answer.push_back (end);
      return answer;
    }
  }
  answer.push_back (-1);
  answer.push_back (-1);
  return answer;
}