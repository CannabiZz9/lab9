#include <iostream>
using namespace std;

int main()
{
  string t1 = "You have received very KAK items.\n";
  string t2 = "You have received 2000 coins.\n";
  string t3 = "You have received 1 gems.\n";
  string t4 = "You have received 5 gems.\n";
  string t5 = "You have received Super Ultra Rare Unit!!!\n";
  char rank;
  cout << "Input your rank: ";
  cin >> rank;
  
  if(rank == 'S'){ 
    cout << t5 << t4 << t3 << t2 << t1;
   }
   if(rank == 'A'){ 
    cout << t4 << t3 << t2 << t1 ;
   }
  if(rank == 'B'){ 
    cout << t3 << t2 << t1;
   } 
  if(rank == 'C'){ 
    cout << t2 << t1;
   } 
   if(rank =='D'){
    cout << t1;
    } 
  
  return 0;
}