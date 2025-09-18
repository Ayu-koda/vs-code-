// #include <bits/stdc++.h>
// using namespace std;


// // pairs 
// void explainpairs(){
//     pair<int,int> p={1,3};
//     cout<<p.first<<" "<<p.second<<endl;
//     pair<int,pair<int,int>> r={1,{3,4}};
//     cout<<r.first<<" "<<r.second.first<<" "<<r.second.second<<endl;
//     pair<int,int> arr[]={{1,2},{3,4},{5,6}};
//     cout<<arr[1].first;
// }

// //vectors
// void explainvectors(){
//     vector<int> v;
//     v.push_back(1);
//     v.emplace_back(2);

//     vector<pair<int,int>> vec;
//      vec.push_back({1,4});
//      vec.emplace_back(1,3);

//      vector<int> v1(5,100);  // {100,100,100,100,100}

//      vector<int> v(5);    //{0,0,0,0,0}   0 = garbage value 

//      vector<int> v3(5,20);  // {20,20,20,20,20}
//      vector<int> v4(v3);   // make a copy of vector 
     
//      // Iteration

//      vector<int>::iterator it = v.begin();

//      it++;
//      cout<<*(it)<<" ";

//      it += 2;
//      cout<<*(it)<<" ";

//      vector<int>::iterator it = v.end();
//      vector<int>::iterator it = v.rend();
//      vector<int>::iterator it = v.rbegin();
     
//      cout<<v[0]<<" "<<v.at(0);
//      cout<<v.back()<<" ";
//      // simply printing the vector through loop 
//      for(vector<int>::iterator it=v.begin(); it!=v.end();it++){
//         cout<<*(it)<<" ";
//      }

//       for(auto it=v.begin(); it!=v.end();it++){
//         cout<<*(it)<<" ";
//      }

//      for(auto it:v){
//         cout<<it<<" ";
//      }

//      // erase 
//      //{10,20,12,23}
//      v.erase(v.begin()+1);  // ans  {10,12,23}
     
//      //{10,20,12,23,35}
//      v.erase(v.begin()+2,v.end()+4);  // ans  {10,20,35}

//      // Insert Function
//      vector<int>v(2,100); //{100,100}
//      v.insert(v.begin(),300); //{300,100,100}
//      v.insert(v.begin()+1,2,10); //{300,10,10,100,100}

//      vector<int> copy(2,50);  // {50,50}
//      v.insert(v.begin(),copy.begin(),copy.end()); //{50,50,300,10,10,100,100}

//      //{10,20}
//      cout<<v.size()<<endl;  // 2

//      //{10,20}
//      v.pop_back(); //{10}
      
//      //v1 = {10,20}
//      //v2 = {30,40}
//      v1.swap(v2);   
//      //v2 = {10,20}
//      //v1 = {30,40} 

//      v.clear(); // erases the entire vector.

//      cout<< v.empty();   // if vector is filled answer = false 
//                          // if vector is empty answer = True 
// }

// void explainlist(){
//     list<int> ls;

//     ls.push_back(2);            // {2}
//     ls.emplace_back(4);         //{2,4}
//     ls.push_front(5);           //{5,2,4}
//     ls.emplace_front(); ,{2,4}; //{2,4,5,2,4}
//    // rest functions same as vectors 
//    // begin, end, rbegin, rend, clear, insert, empty,size ,swap 
// }

// void explaindeque(){
//     deque<int> dq;

//     dq.push_back(1);            // {1}
//     dq.emplace_back(2);         //{1,2}
//     dq.push_front(4);           //{4,1,2}
//     dq.emplace_front(3);        //{3,4,1,2}
//     dq.pop_back();              //{3,4,1}
//     dq.pop_front();             //{4,1}
//     dq.back();
//     dq.front(); 
//     // rest functions same as vectors 
//    // begin, end, rbegin, rend, clear, insert, empty,size ,swap 
// }

// void explainStack() {
//     stack<int> st;
//     st.push(1);   // {1}
//     st.push(2);   // {2, 1}
//     st.push(3);   // {3, 2, 1}
//     st.push(3);   // {3, 3, 2, 1}
//     st.emplace(5); // {5, 3, 3, 2, 1}

//     cout << st.top(); // prints 5    "** st[2] is invalid **"
//     st.pop();         // st looks like {3, 3, 2, 1}
//     cout << st.top(); // 3
//     cout << st.size(); // 4
//     cout << st.empty(); // false (0)

//     stack<int> st1, st2;
//     st1.swap(st2);
// }

// void explainQueue() {
//     queue<int> q;
//     q.push(1);     // {1}
//     q.push(2);     // {1, 2}
//     q.emplace(4);  // {1, 2, 4}

//     q.back() += 5; // Last element (4) becomes 9, so queue is now {1, 2, 9}

//     cout << q.back();   // prints 9
//     // Queue is {1, 2, 9}
//     cout << q.front();  // prints 1
//     q.pop();            // removes 1, now queue is {2, 9}
//     cout << q.front();  // prints 2
//     // size, swap, empty — work same as stack
// }

// void explainPQ() {
//     priority_queue<int> pq;

//     pq.push(5);     // {5}
//     pq.push(2);     // {5, 2}
//     pq.push(8);     // {8, 5, 2}
//     pq.emplace(10); // {10, 8, 5, 2}

//     cout << pq.top(); // prints 10 (Max Heap by default)

//     pq.pop();         // removes 10, now {8, 5, 2}

//     cout << pq.top(); // prints 8

//     // size, swap, empty functions same as others

//     // ---------------------------
//     // Minimum Heap
//     priority_queue<int, vector<int>, greater<int>> pq;

//     pq.push(5);     // {5}
//     pq.push(2);     // {2, 5}
//     pq.push(8);     // {2, 5, 8}
//     pq.emplace(10); // {2, 5, 8, 10}

//     cout << pq.top(); // prints 2 (Minimum element at top)
// }

// void explainSet() {
//     set<int> st;
//     st.insert(1);    // {1}
//     st.emplace(2);   // {1, 2}
//     st.insert(2);    // {1, 2}
//     st.insert(4);    // {1, 2, 4}
//     st.insert(3);    // {1, 2, 3, 4}

//     // Functionality of insert in vector
//     // can be used also, that only increases efficiency

//     // begin(), end(), rbegin(), rend(), size(),
//     // empty() and swap() are same as those of above

//     // {1, 2, 3, 4, 5}
//     auto it = st.find(3);

//     // {1, 2, 3, 4, 5}
//     auto it = st.find(6);

//     // {1, 4, 5}
//     st.erase(5); // erases 5 // takes logarithmic time

//     int cnt = st.count(1);    // if exists return 1 else 0.

//     auto it = st.find(3);
//     st.erase(it); // it takes constant time

//     // {1, 2, 3, 4, 5}
//     auto it1 = st.find(2);
//     auto it2 = st.find(4);
//     st.erase(it1, it2); // after erase {1, 4, 5} [first, last]

//    // lower_bound() and upper_bound() function works in the same way
//    // as in vector it does.

//     // This is the syntax
//     auto it = st.lower_bound(2);
//     auto it = st.upper_bound(3);
// }

// void explainMultiSet() {
//     // Everything is same as set
//     // only stores duplicate elements also

//     multiset<int> ms;
//     ms.insert(1);       // {1}
//     ms.insert(1);       // {1, 1}
//     ms.insert(1);       // {1, 1, 1}
//     ms.erase(1);        // all 1's erased

//     int cnt = ms.count(1);

//     // only a single one erased
//     ms.erase(ms.find(1));
//     ms.erase(ms.find(1), ms.find(1) + 2);

//     // rest all function same as set
// }

// void explainUSet() {
//     unordered_set<int> st;

//     // lower_bound and upper_bound function
//     // does not work, rest all functions are same

//     // as above, it does not stores in any
//     // particular order. It has a better complexity
//     // than set in most cases, except some when collision happens
// }

// void explainMap() {
//     map<int, int> mpp;
//     map<int, pair<int, int>> mpp;
//     map<pair<int, int>, int> mpp;

//     mpp[1] = 2;                    
//     mpp.emplace({3, 1});            
//     mpp.insert({2, 4});             
//     mpp[{2, 3}] = 10;              

//     //mpp contains :
//     // {1,2}
//     // {2,4}   
//     // {3,4}

//     for(auto it : mpp){
//         cout<<it.first<<" "<<it.second<< endl;
//     }

//     cout<<mpp[1];     // 2
//     cout<<mpp[5];     // null or 0

//     auto it = mpp.find(3);
//     cout<<*(it).second;

//     auto it = mpp.find(5);    
//     // this is the syntax 
//     auto it = mpp.lower_bound(2);
//     auto it = mpp.upper_bound(3);

//     // erase,swap,size,empty are same as above .
// }

// void explainMultimap() {
//     // everything same as map, only it can store multiple keys
//     // only mpp[key] cannot be used here
// }

// void explainUnorderedMap() {
//     // same as set and unordered_set difference.
// }

// bool comp(pair<int,int> p1, pair<int,int> p2) {
//     if(p1.second < p2.second) return true;
//     if(p1.second > p2.second) return false;
//     // they are same
//     if(p1.first > p2.first) return true;
//     return false;
// }




// // ########################################
// //      ALGORITHMS 


// void explainExtra() {
//     // Basic sorting of arrays and vectors
//     sort(a, a + n);                      // Sort array from a[0] to a[n-1]
//     sort(v.begin(), v.end());           // Sort vector from begin to end
//     sort(a + 2, a + 4);                 // Sort part of array from a[2] to a[3]

//     sort(a, a + n, greater<int>());     // Sort in descending order

//     // Array of pairs
//     pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

//     // Custom sort:
//     // - sort by second element by incresing order 
//     // - if second element is same, then sort by first in descending order
//     sort(a, a + n, comp);    // You need to define comp function    

//     // Result would be: {{4,1}, {2,1}, {1,2}}

//     // Counting set bits (popcount)
//     int num = 7;
//     int cnt = __builtin_popcount(num);          // For int (32-bit)
    
//     long long num2 = 165786578687;
//     int cnt2 = __builtin_popcountll(num2);      // For long long (64-bit)

//     // Generating permutations
//     string s = "123";
//     do {
//         cout << s << endl;
//     } while (next_permutation(s.begin(), s.end()));
// }

// int main(){
//      explainpairs();
//      explainvector();
// }