#include<iostream>
using namespace std;

int main()
{
int k, i = 0, sum_k = 0, number;
cout << " Enter the amount of integers to sum nr." << i<<": ";
cin >> k;
 if (k == 0)
 {
cout << "The sum of 0 integers is: 0" << endl;
return 0;
}
do
{
cout << "Enter integer: ";
cin >> number;
sum_k += number;
i++;
}
while (i<k);
cout << " The total sum of " << k << " integers is: " << sum_k << endl;
return 0;
}
