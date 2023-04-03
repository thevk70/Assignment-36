// 1. Using STL Array gets and sets a reference to an element based on a given index.
// #include <iostream>
// #include <array>
// using namespace std;
// int main()
// {
//     array<int,5> v{{10,20,30,40,50}};

//     cout<<"element at index 0:  "<<v[0]<<endl; 
//     cout<<"element at index 1:  "<<v[1]<<endl; 
//     cout<<"element at index 2:  "<<v[2]<<endl; 
//     cout<<"element at index 3:  "<<v[3]<<endl; 
//     cout<<"element at index 4:  "<<v[4]<<endl; 
//     v[0] = 100;
//     v[4] = 500;
//     cout<<"All elements:"<<endl;
//     for (auto i : v)
//     {
//         cout<<i<<endl; 
//     }
//     return 0;
// }

// 2. Using STL Array returns the total number of elements in the array.
// #include <iostream>
// #include <array>
// using namespace std;
// int main()
// {
//     int c = 0;
//     array<int,5> ar {1,2,3,4,5};
//     int n = sizeof(ar)/sizeof(ar[0]);
//     for (int i = 0; i < n; i++)
//     {
//         c++;
//     }
//     cout<<"Total no of element:: "<<c<<endl;
//     return 0;
// }

// 3. Declare a vector with Initialization and print the elements.
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> v{1,2,3,4,5};
//     vector<int>::iterator it;
//     for ( it = v.begin(); it != v.end(); it++)
//     {
//        cout<<*it<<" ";
//     }
//     return 0;
// }

// 4. Declare a vector without initialization, insert some elements and print
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     vector<int>::iterator it;
//     for ( it = v.begin(); it != v.end(); it++)
//     {
//        cout<<*it<<" ";
//     }
//     return 0;
// }

// 5. Write a c++ code, to demonstrate the forward list.
// #include <iostream>
// #include <forward_list>
// using namespace std;
// int main()
// {
//     forward_list<int> f;
//     f.assign({1,2,3,4,5});
//     f.push_front(0);
//     f.pop_front();
//     f.remove(5);
//     forward_list<int>::iterator x;
//     for ( x = f.begin(); x != f.end(); x++)
//     {
//         cout<<*x<<" ";
//     }
//     return 0;
// }

// 6. Inserts an element. And returns an iterator that points to the first of the newly inserted elements.
// #include <iostream>
// #include <forward_list>
// using namespace std;
// int main()
// {
//     forward_list<int> f;
//     f.assign({1,3,4,5,6});
//     forward_list<int>::iterator it = f.begin(); 
//     f.insert_after(it,2);
//     forward_list<int>::iterator x;
//     for ( x = f.begin(); x != f.end(); x++)
//     {
//       cout<<*x<<" ";
//     }
//     return 0;
// }

// 7. Returns a reverse iterator which points to the last element of the deque (i.e., its reverse 
// beginning).
// #include <iostream>
// #include <deque>
// using namespace std;
// int main()
// {
//     deque<int> dq = {1,2,3,4,5};
//     cout<<"The deque in reverse order: ";
//     for (auto i = dq.rbegin(); i != dq.rend(); i++)
//     {
//         cout<<*i<<" ";
//     }
//     return 0;
// }

// 8. Create a stack of int type, push 5 elements in it and print it on the console screen.
// #include <iostream>
// #include <stack>
// using namespace std;
// int main()
// {
//     stack<int> s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);
//     while (!s.empty())
//     {
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     return 0;
// }

// 9. Create a stack of int type, and find the top most element in a stack.
// #include <iostream>
// #include <stack>
// using namespace std;
// int main()
// {
//     stack<int> s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);
//     cout<<s.top();
//     return 0;
// }

// 10. Create a railways ticket counter and allot ticket to first come first take using c++ STL
// #include <iostream>
// #include <ctime>
// #include <queue>
// using namespace std;
// class Ticket
// {
//     public:
//     string passenger;
//     int tno;
// };
// Ticket TicketCounter()
// {
//     Ticket temp;
//     cout<<"Enter your name :";
//     cin>> temp.passenger;
//     srand(time(NULL));
//     temp.tno = rand();
//     return temp;
// }
// void showTicketList(queue<Ticket> q)
// {
//     Ticket temp;
//     cout<<"|  Ticcket Number  |  Passenger Name  |"<<endl;
//     cout<<"|-------------------------------------|"<<endl;
//     while (!q.empty())
//     {
//         temp = q.front();
//         cout<<"|    "<<temp.tno<<"         |      "<<temp.passenger<<"      |"<<endl;
//         q.pop();
//     }
//     cout<<"|-------------------------------------|"<<endl;
// }
// int main()
// {
//     queue<Ticket> q;
//     int size;
//     cout<<"Enter the number of passenger :";
//     cin>>size;
//     for (int i = 0; i < size; i++)
//     {
//         q.push(TicketCounter());
//     }
//     showTicketList(q);
//     return 0;
// }