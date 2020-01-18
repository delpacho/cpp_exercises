#include <iostream>
#include <vector>

template <typename T>
void swap(std::vector<T>& array, int j, int i){
  auto tmp = array[j];
  array[j] = array[i];
  array[i] = tmp;
}


template <typename T>
void bubble_sort(std::vector<T>& array){
  auto swapped = true;

  while(swapped){
      swapped = false;

      for(auto j = 0; j < array.size() -1; ++j){
        if(array[j+1] < array[j]){
          swap(array, j+ 1, j);
          swapped = true;
        }
      }
  }

}

template <typename T>
void insertion_sort(std::vector<T>& array){
  auto  i = 1;
  while(i < array.size()) {
    auto j = i;
    while (j > 0 && array[j -1] > array[j]) {
      swap(array, j, j - 1);
      --j;
    }
    ++i;
  }
}

int main() {

  std::vector<double> vector1 = {1.3, 1, 100.2, 90, 60};
  auto vector2 = vector1;
  bubble_sort(vector1);
  for(auto value: vector1)
    std::cout << value << ",";

  std::cout << std::endl;

  insertion_sort(vector2);
  for(auto value: vector2)
    std::cout << value << ",";
  return 0;
}
