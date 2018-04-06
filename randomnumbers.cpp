#include <random>
 #include <iostream> 
  int main()
  {
   int seed = 0;
   std::mt19937 gen(seed);
   std::normal_distribution<> dis(2.0,1.0);
   for (int n = 0; n < 100000; ++n) {
     
     std::cout << dis(gen) << '\n'; 
   }
   std::cout << '\n';
 }
 
