#include <iostream>
#include <ctime>
int main()
{
  int arr_len = 10E5;
  int array[arr_len];
  for(int i = 0; i < arr_len; i++){ 
    array[i] = i; 
  }

  clock_t begin = clock();
  for(int i = 0; i < arr_len; i++){ array[i] += 1; }
  clock_t end = clock();
  double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
  std::cout << elapsed_secs << std::endl;
}
