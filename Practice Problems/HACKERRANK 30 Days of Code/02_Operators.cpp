#include <bits/stdc++.h>
using namespace std;

int main()
{
  double mealCost, totalCost;
  int totalCostRound, tipPercent, taxPercent;
  
  cin >> mealCost >> tipPercent >> taxPercent;
  
  totalCost = mealCost * (1.0 + (double)taxPercent/100.0 + (double)tipPercent/100.0);
  totalCostRound = (int)(totalCost + 0.5);
  
  cout << "The tota meal cost is " << totalCostRound << " dollars.";
  
  return 0;  
}
