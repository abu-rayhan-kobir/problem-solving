#include <iostream>
#include <vector>

std::vector<int> twoPairSum(std::vector<int> &numbers, int target);

int main()
{
  std::vector<int> numbers = {1, 2, 4, 5, 3};
  int target = 9;
  std::vector<int> result = twoPairSum(numbers, target);
  std::cout << result.at(0) << " and " << result.at(1) << std::endl;
  return 0;
}

std::vector<int> twoPairSum(std::vector<int> &numbers, int target)
{
  std::vector<int> answer;
  for (int i = 0; i < numbers.size(); i++)
  {
    for (int j = i + 1; j < numbers.size(); j++)
    {
      if (numbers.at(i) + numbers.at(j) == target)
      {
        answer.push_back(i);
        answer.push_back(j);
        return answer;
      }
    }
  }
  answer.push_back(-1);
  answer.push_back(-1);
  return answer;
}