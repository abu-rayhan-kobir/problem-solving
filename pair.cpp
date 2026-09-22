// Find out the total pair an array
// {1, 2, 3, 4}
// (1, 2), (1, 3), (1, 4), (2, 3), (2, 4), (3, 4)

# include <iostream>
# include <vector>

void pairs (std :: vector <int>& numbers);

int main () {
  std :: vector <int> numbers = {1, 2, 3, 4};
  pairs (numbers);
  return 0;
}

void pairs (std :: vector <int>& numbers) {
  for (int i = 0; i < numbers.size (); i++) {
    for (int j = i + 1; j < numbers.size (); j++) {
      std :: cout << "(" << numbers.at (i) << ", " << numbers.at (j) << ")" << " ";
    }
    std :: cout << std :: endl;
  }
  return;
}

