/*
        Lab1 Team Programming
        Author: Dov Kruger
        For a description of each function, see:
        https://docs.google.com/document/d/1eTLecRiJJdQkS6OWDgNIhECLfIvyYP_-EdfwistiT8U/edit?usp=sharing
*/
#include <cmath>
#include <cstdint>
#include <iostream>
#include <vector>
using namespace std;

// scalar functions
// 1 David Krauthamer
int sum(int a, int b) { return a + b; }
// 2 Brandon Joel
int prod(int a, int b) {
  int result = a*b;
  return result;
}
// 3
int sumsq(int a, int b) {//Jonathan M
int sum = 0;
for (int i = a; i <= b; i++){
	sum += (i * i);
}
return sum;
}

// 4 - Thomas Wang
bool isPrime(int a)
{
  if(a <= 1)
    {
      return false;
    }

  for(int i = 2; i < a; i++)
    {
      if(a % i == 0)
	{
	  return false
        }
    }
  
  return true;
}
// 5
int countPrimes(int a, int b) {
  int count = 0;

  for (int i = a; i <= b; i++) {
    if (isPrime(i)) {
      count++;
    }
  }

  return count;
}
// 6 Nathan Molinari
int gcd(int a, int b) {
 if (b==0) 
    return a;
    return gcd(b, a%b);
 		       
}
// 7
int hypot(int a, int b) {}
// 8 Jackie Fang
int diffsq(int a, int b) {return a * a - b * b;}
// 9
int mean2(int a, int b) {}
// 10
int mean3(int a, int b, int c) {}
// 11
int min(int a, int b) {}
// 12
int max(int a, int b) {}
// 13
bool isEven(int a) {}

// 14
double perimeter3(int x1, int y1, int x2, int y2, int x3, int y3) {}

// array functions
// 1
// David Krauthamer
double mean(int x[], int length) {
  int tot = 0;
  for (int i = 0; i < length; i++) {
    tot += x[i];
  }
  return (double)tot / length;
}

// 2 Brandon Joel
int max(int x[], int length) {
  int result = INT_MIN;
  for (int i = 0; i < length; i++){
    if x[i] > result
	  result = x[i];
  }
  return result;
}

// 3
int min(int x[], int length) { //Jonathan Melamed

   int head = x[0];
	for (int i = 0; int < 0; i<length; i++){
		if (head > x[i]){
			head = x[i];
			}
	}	
   return head;
}

// 4 - Thomas Wang
int prod(int x[], int length)
{
  int product = 1;
  for(int i = 0; i < length; i++)
    {
      product *= x[i];
    }

  return product;
}

// 5
int sum(int arr[], int size) {
  int total = 0;

  for (int i = 0; i < size; i++) {
    total = total + arr[i];
  }

  return total;
}

// 6
int demean(double x[], int length) { return 0; }

// 7
int addToEach(double x[], int length, int delta) {}

// 8
int countEvens(int x[], int length) {
  int num = 0;
  for (int i = 0; i < length; i++) {
    if (x[i] % 2 == 0) num++;
  }
  return num;
}

// 9
int reverse(int x[], int length) { return 0; }

// 10
int round(double x[], int length) {}

void print(int a[], int length) {
  for (int i = 0; i < length; i++) {
    cout << a[i] << " ";
    if (i == (length - 1)) {
      cout << endl;
    }
  }
}

int main() {
  cout << sum(1, 3) << ' ' << sum(1, 100)
       << '\n'; // should work no problem, right?
  cout << sum(1, 1000000)
       << '\n'; // what should this be? Don't assume it's right, check!

  cout << prod(2, 5) << '\n'; // 2*3*4*5 = 120
  cout << prod(3, 10) << '\n';
  cout << prod(3, 20) << '\n'; // just note whether you think these are right
  cout << prod(3, 30) << '\n'; // if it overflows, you don't have to fix it
  cout << prod(3, 100) << '\n';
  cout << sumsq(1, 5) << '\n';
  cout << "countPrimes(1,100): " << countPrimes(1, 100) << '\n';
  cout << "countPrimes(1,1000000): " << countPrimes(1, 1000000) << '\n';
  cout << "isPrime(1001)=" << isPrime(1001) << '\n';
  cout << "gcd(12, 18)=" << gcd(12, 18) << '\n';
  cout << "gcd(1025, 3025)=" << gcd(1025, 3025) << '\n';
  cout << "hypot(3,4)=" << hypot(3, 4) << '\n';
  cout << "hypot(4,5)=" << hypot(4, 5) << '\n';
  cout << "diffsq(3,4)=" << diffsq(3, 4) << '\n';
  cout << "mean2(1,4)=" << mean2(1, 4) << '\n';
  cout << "mean3(1,4,5)=" << mean3(1, 4, 5) << '\n';
  cout << "max(1,5)=" << max(1, 5) << '\n';
  cout << "min(2,5)=" << min(2, 5) << '\n';
  cout << "isEven(5)=" << isEven(5) << '\n';
  cout << "perimeter of tri=" << perimeter3(0, 0, 3, 0, 3, 3) << '\n';

  // array problems
  int arr[] = {1, 4, 3, 2};
  cout << "arr avg=" << mean(arr, 4) << '\n';           // should be 2.5
  cout << "arr max=" << max(arr, 4) << '\n';            // should be 4
  cout << "arr max=" << min(arr, 4) << '\n';            // should be 1
  cout << "arr prod=" << prod(arr, 4) << '\n';          // should be 24
  cout << "arr sum=" << sum(arr, 4) << '\n';            // should be 10
  cout << "count evens=" << countEvens(arr, 4) << '\n'; // should be 10

  int arr2[] = {5, 6, 7, 8, 9, 10, 2, 1};
  cout << "arr avg=" << mean(arr2, 8) << '\n';
  cout << "arr max=" << max(arr2, 8) << '\n';
  cout << "arr max=" << min(arr2, 8) << '\n';
  cout << "arr prod=" << prod(arr2, 8) << '\n';
  cout << "arr sum=" << sum(arr2, 8) << '\n';

  double arr3[6] = {1, 2, 3, 4, 5, 6};
  demean(arr3, sizeof(arr3) / sizeof(double));
  print(arr3, 6);

  double arr7[] = {2.5, 2.8, 3.1, 4.2, 9.6, 7.1, -7.3, -7.6};
  round(arr7, sizeof(arr7) / sizeof(double));
  print(arr7, sizeof(arr7) / sizeof(double));

  cout << "countevens=" << countEvens(arr6, 7) << '\n';
  addToEach(arr6, 7, 3);
  print(arr6, sizeof(arr6) / sizeof(double));

  int r1[] = {1, 2, 3, 4, 5, 6, 7};
  reverse(r1, 7);
  print(r1, 7);

  int r2[] = {1, 2, 3, 4, 5, 6, 7, 8};
  reverse(r2, 8);
  print(r2, 8);
}
