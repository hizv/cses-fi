#include <string>
#include <iostream>
using namespace std;
typedef unsigned long long ull;

int main(){
   string s;
   cin >> s;

   char prev = s[0];
   ull rep = 1, max_rep = 1;

   ull N = s.length();
   for (ull i = 1; i < N; i++){
      char c = s[i];
      if (prev != c){
         prev = c;
         if (rep > max_rep) max_rep = rep;
         rep = 1;
      }
      else rep++;
   }

   if (rep > max_rep) max_rep = rep;

   cout << max_rep;
}
