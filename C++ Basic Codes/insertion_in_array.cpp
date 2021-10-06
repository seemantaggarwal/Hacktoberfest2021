#include <iostream>

using namespace std;
void display(int arr[], int n)
{
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
}
int insert(int arr[], int n, int index, int element, int capacity)
{
   if (n >= capacity)
   {
      return -1;
   }
   else
   {
      for (int i = n - 1; i >= index; i--)
      {
         arr[i + 1] = arr[i];
      }
      arr[index] = element;
      return 1;
   }
}
int main()
{
   int size;
   cin >> size;
   int arr[size];
   for (int i = 0; i < size; i++)
   {
      cin >> arr[i];
   }
   int element;
   cin >> element;
   int index;
   cin >> index;
   int capacity;
   cin >> capacity;
   int result = insert(arr, size, index, element, capacity);
   if (result == 1)
   {
      size += 1;
      display(arr, size);
   }
   else
   {
      cout << "insertion unsuccessful";
   }
   return 0;
}
