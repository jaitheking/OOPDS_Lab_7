//#include <iostream>
//#include <vector>
//
//
//using namespace std;
//
//
//
//int main (){
//
//vector<int> t;
//for (int i=1;i<=20;i++){
//
//    t.push_back(i);
//    cout<<"This is the size of the vector,T :"<<t.size()<<endl;
//    cout<<"This is the capacity of the vector,T :"<<t.capacity()<<endl;
//
//}
//cout<<"+++++++++++++++++++++++++++++++++++++++++++++"<<endl;
//
//for (int j=0;j<=19;j++){
//
//    t.pop_back();
//    cout<<"This is the size of the vector,T :"<<t.size()<<endl;
//    cout<<"This is the capacity of the vector,T :"<<t.capacity()<<endl;
//
//}
//
//return 0;
//}

//Question 1
/*
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> // system("PAUSE");
using namespace std;

int main() {
  vector<int> v1;
  cout << "Adding 20 items to vector.\n";
  cout << "vector automatically doubles the capacity of its internal dynamic array when it is full.\n";
  cout << "Size\tCapacity\n";
  cout << v1.size() << "\t" << v1.capacity() << endl;
  for (int i = 0; i < 20; i++) {
    v1.push_back (i);
    cout << v1.size() << "\t" << v1.capacity() << endl;
  }

  system("PAUSE");

  cout << "Removing the items in vector.\n";
  cout << "vector never automatically reduces its array capacity.\n";
  cout << "Size\tCapacity\n";
  while (!v1.empty()) {
    v1.erase (v1.begin());
    cout << v1.size() << "\t" << v1.capacity() << endl;
  }
}
*/
//Question 2

#include <iostream>
#include <string>
using namespace std;

class Point {
  int x;
  int y;
 public:
  Point (int x = 0, int y = 0) : x(x), y(y) {}
  friend ostream& operator<< (ostream& os, Point& p) {




// Add code.
  }
  friend istream& operator>> (istream& is, Point& p) {
    cout << "Input x y: ";
// Add code.
  }
  friend bool operator== (Point& left, Point& right) {
// Add code.
  }
};

template <typename T>
struct Node {
  T info;
  Node<T> *next;
};

template <typename T>
class LinkedList {
  Node<T> *start;
public:
  LinkedList() {
    start = NULL;
  }

  ~LinkedList() {
    makeEmpty();
  }

  void insertFront (T& newElement) {

    Node <T> *newNode = new Node <T>;
    newNode->info = element;
    newNode->next = start;
    start = newNode;
  }

  void insertBack (T& newElement) {
   Node <T> *newNode = new Node <T>;
   newNode->info = element;
   Node <T> *ptr = start;
   ptr = ptr->next;
   delete ptr;

  }

  bool insertAfter (T& target, T& newElement) {
// Add code.
  }

  bool search (T& target) {
    T item;
    if (!first(item))
    return false;
    do if (item==element)
    return true;
    while (getNext(item));

    return false;

  }

  void makeEmpty () {
// Add code.
  }

  friend ostream& operator<< (ostream& os, LinkedList<T>& list) {
// Add code.
  }
};

int main() {
  int seed = 0;         // seed for automatic value of x and y.
  LinkedList<Point> list;
  int choice; // user choice.
  bool found;
  Point newPoint, target;
  do {
    cout << "Choice:\n"
         << "1: Display points\n"
         << "2: Insert new point at the front\n"
         << "3: Insert new point at the end\n"
         << "4: Insert new point after a target\n"
         << "5: Search a point\n"
         << "6: Empty the list\n"
         << "Others: Exit\n";
    cin >> choice;
    switch (choice) {
      case 1 : cout << list << endl;
               break;
      case 2 : newPoint = Point(++seed, seed);
               list.insertFront (newPoint);
               break;
      case 3 : newPoint = Point(++seed, seed);
               list.insertBack (newPoint);
               break;
      case 4 : cin >> target;
               newPoint = Point(++seed, seed);
               found = list.insertAfter (target, newPoint);
               if (!found) cout << "Target not found\n";
               break;
      case 5 : cin >> target;
               found = list.search (target);
               if (!found) cout << "Target not found\n";
               else       cout << "Target found\n";
               break;
      case 6 : list.makeEmpty();
               cout << "List is emptied\n\n";
               break;
    }
  } while (choice >= 1 && choice <= 6);
}