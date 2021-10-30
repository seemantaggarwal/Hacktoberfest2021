#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::cin;
using std::cout;
using std::swap;
using std::pair;
using std::make_pair;

class HeapBuilder {
 private:
  vector<int> data_;
  vector< pair<int, int> > swaps_;

  void WriteResponse() const {
    cout << swaps_.size() << "\n";
    for (int i = 0; i < swaps_.size(); ++i) {
        cout << swaps_[i].first << " " << swaps_[i].second << "\n";
    }
  }

  void ReadData() {
    int n;
    cin >> n;
    data_.resize(n);
    for(int i = 0; i < n; ++i)
      cin >> data_[i];
  }

  int Parent(int i)
  {
      return (i-1)/2;
  }

  int LeftChild(int i)
  {
      return 2*i + 1;
  }

  int RightChild(int i)
  {
      return 2*i + 2;
  }

  void SiftUp(int i)
  {
      int child = i;
      while(child > 0)
      {
          int parent = Parent(i);
          if(data_[parent] > data_[child])
          {
              swaps_.push_back(make_pair(parent, child));
              swap(data_[parent], data_[child]);
              child = parent;
          }

          else
          {
              return;
          }

      }

  }

  void SiftDown(int i)
  {
      int min = i;
      int n = data_.size();
      int l = LeftChild(i);
      int r = RightChild(i);

      if(l < n && data_[l] < data_[min])
      {
          min = l;
      }

      if(r < n && data_[r] < data_[min])
      {
          min = r;
      }

      if(i != min)
      {
          swaps_.push_back(make_pair(i, min));
          int temp = data_[i];
          data_[i] = data_[min];
          data_[min] = temp;

          SiftDown(min);
      }
  }



  void GenerateSwaps() {
    swaps_.clear();
   
//SiftDown approach
    int size = data_.size();
    int n = size;

      for (int i = n/2 - 1; i >= 0; --i) {
          SiftDown(i);
      }
  }

 public:
  void Solve() {
    ReadData();
    GenerateSwaps();
    WriteResponse();
  }
};

int main() {
  std::ios_base::sync_with_stdio(false);
  HeapBuilder heap_builder;
  heap_builder.Solve();
  return 0;
}
