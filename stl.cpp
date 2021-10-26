#include <bits/stdc++.h>
using namespace std;

// namespace abhi {
// 	int val=50;
// 	int getVal() {
// 		return val=10;
// 	}
// }

//user-defined datatype : Structure
struct node {
	string str;
	long n;
	int num;
	double doub;
	char x;

	node(str_, num_, doub_, x_) { //constructor
		str=str_;
		num=num_;
		doub=doub_;
		x=x_;
	}
};

// declaring anything globally it makes automatically 0.
array <int,3> arr; // -> {0, 0, 0}

// 10^7 is the maximum possible array size (for int, double, char) which can be defined globally
int arr[10000000]; // int, double, char 

// 10^8 is the maximum possible array size (for boolean) which can be defined globally
bool arr[100000000];

// Comparator Function - While making comparator function always think of 2 elements
bool comp(int el1, int el2) {
	if(el1<=el2) {
		return true;
	}
	return false;
}

// arr
// pair <int,int> arr[] = {{1,4},{5,2},{5,9}}
// ans-> arr[] = {{1,4},{5,9},{5,2}}
// I want you to sort this in such a way that the element who have first element in pair smaller appears first
// and if first is equal then sort according to second and keep the larger second.

bool comp(pair <int,int> el1, pair <int,int> el2) {
	if(el1.first<el2.first) {
		return true;
	} 
	if(el1.first==el2.first) {
		if(el1.second>el2.second) {
			return true;
		}
	}
	return false;
}

int main() {
	sort(arr,arr+3,comp);
}



int main() {

	// 10^6 is the maximum possible array size (for int, double, char) which can be defined inside int main()
	int arr[1000000]; // int, double, char 

	// 10^7 is the maximum possible array size (for boolean) which can be defined inside int main()
	bool arr[10000000];

	double val=10.0;
	cout<<val<<endl; // print 10.0

	cout<<abhi::getVal()<<endl;

	/*
	**********datatypes**********
	int
	double
	char
	float
	string
	array[]
	*/

	/*
	*********own datatype********
	*********using struct********
	{string, int, double, char}
	*/

	node *abhi=new node("foreverabhi",19,91.0,""); // new means new instance of the constructor

	/*
	Arrays -> int arr[100]
	*/ 
	// declaring anything inside int main, it will automatically becomes as garbage values.
	array <int, 3> arr; // -> {?, ?, ?}

	//declaring anything partially inside the int main, all the other variable end up 0. 
	array <int, 5> arr = {1, 5, 6}; // -> {1, 5, 6, 0, 0}

	//declaring anything partially inside the int main, all the other variable end up 0. 
	array <int, 5> arr = {1}; // -> {1, 0, 0, 0, 0}

	//declaring anything inside the int main, and initializing everything with 0.
	array <int, 5> arr = {0}; // -> {0, 0, 0, 0, 0}

	int arr[1000] = {0}; // initiallizing 1st index 0 and the remaining others end up 0.

	array <int, 5> arr;
	//entire array will with 5
	arr.fill(5); // -> {5, 5, 5, 5, 5}


	arr.at(index);

	for(int i=0;i<5;i++) {
		cout<<arr.at[i]<<" ";
	}

	//iterators
	//begin(), end(), rbegin(), rend()
	/*
	begin points the first element
	end points after the last element
	rbegin points the reversed begin element i.e., last element
	rend points before the first element 

	rend  begin	         rbegin end     
	NULL	1    2    3    4    NULL
	*/

	array <int, 5> arr={1, 3, 4, 5, 6};
	for(auto it=arr.begin(); it!=arr.end(); it++) { // auto means automatically takes the datatype // it means iterator basically a pointer
		cout<<*it<<" "; // *it because pointer 
	}

	// iterator decrementation is not allowed
	for(auto it=arr.rbegin(); it!=arr.rend(); it++) { // reverse array
		cout<<*it<<" "; 
	}

	for(auto it=arr.end()-1; it>=arr.begin(); it++) { // reverse array
		cout<<*it<<" "; 
	}

	for(auto it=arr.rend()+1; it<=arr.rbegin(); it++) {
		cout<<*it<<" ";
	}

	//for each loop
	for(auto it: arr) { // it here does not points anything but the iterator element itself
		cout<<it<<" "; // it is not a pointer but the element itself
	}

	// array size
	cout<<arr.size();

	// front element
	cout<<arr.front(); // arr.at(0);

	// back element
	cout<<arr.back(); // arr.at(arr.size()-1);

	// **************VECTOR**************

	// Segmentation fault if you push_back 10^7 times

	vector <int> arr; // -> {}
	arr.push_back(0); // -> {0}
	arr.push_back(2); // -> {0,2} 
	cout<<arr.size(); // -> 2
	arr.pop_back(); // pop backs last element // -> {0}
	cout<<arr.size(); // -> 1

	vec.clear(); // --> erase all elements at once // -> {}

	vector <int> vec1(4,0); // -> {0, 0, 0, 0}
	vector <int> vec2(4,10); // -> {10, 10, 10, 10}

	//copy the entire vector
	// vector <datatype> variable(starting_point, ending_point);
	vector <int> vec3(vec2.begin(),vec2.end()); // -> {}
	vector <int> vec3(vec2);

	vector <int> abhi;
	abhi.push_back(1); //abhi.emplace_back(1); // emplace_back takes lesser time than push_back
	abhi.push_back(3);
	abhi.push_back(2);
	abhi.push_back(5); // -> {1, 3, 2, 5}

	abhi.emplace_back(1);
	abhi.emplace_back(3);
	abhi.emplace_back(2);
	abhi.emplace_back(5); // -> {1, 3, 2, 5}

	vector <int> abhi1(abhi.begin(), abhi.begin()+2); // -> {1,3,2}

	// lower bound , upper bound

	// swap swap(v1,v2)
	// begin(), end(), rbegin(), rend()

	// ways for defining 2d vectors
	vector <vector <int>> vec;

	vector <int> abhi1;
	abhi1.push_back(1);
	abhi1.push_back(2);

	vector <int> abhi2;
	abhi2.push_back(10);
	abhi2.push_back(20);

	vector <int> abhi3;
	abhi3.push_back(11);
	abhi3.push_back(22);
	abhi3.push_back(33);
	
	vec.push_back(abhi1);
	vec.push_back(abhi2);
	vec.push_back(abhi3);

	// it is the vector itself
	for(auto vctr:vec) {
		for(auto it:vctr) {
			cout<<it<<" ";
		}
		cout<<endl;
	}

	// 2d vector traditional way printing
	for(int i=0;i<vec.size();i++) {
		for(int j=0;j<vect[i].size();j++) {
			cout<<vec[i][j]<<" ";
		}
		cout<<endl
	}

	// how to define 10 X 20 vector
	vector <vector <int>> vec(10, vector <int> (20,0));

	// how to define array of vectors
	vector <int> arr[4];
	arr[0].push_back(2);

	// how to define 3d vector : 10 X 20 X 30
	vector <vector <vector <int>>> vec(10, vector <vector <int>> vec(20, vector <int> (30,0)));



	// *************************************DAY-2*********************************************

	// sets map
	// given n elements, tell me the number of unique elements

	// arr[] = {2, 5, 2, 1, 5} ......... 3 unique elements -> {1, 2, 5}

	// set stores only unique elements in linearly ascending form 
	// and in order to access, you have to use iterators like begin, end, rbegin, rend.
	// set operations are logarithmic in complexity

	set <int> st;
	int n;
	cin>>n;
	for(int i=0;i<n;i++) {
		int x;
		cin>>x;
		st.insert(x); 
	} 

	// st -> {1, 2, 5}
	// erase functionality

	st.erase(st.begin()); // st.erase(iterator) -> {2, 5} time complexity: log n

	st.erase(st.begin(), st.begin() + 2); // -> [) time complexity: log n
	// st.erase(startIterator, endIterator)

	st.erase(5) // st.erase(key) // time complexity: log n

	set <int> st = {1, 5, 7, 8};

	auto it=st.find(7); // time complexity: log n // it will be iterator to 7

	auto it=st.find(9); // it = st.end(); // time complexity: log n 

	st.emplace(6); // st.insert(6); // st.emplace(); is a bit faster than st.insert();

	cout<<st.size()<<endl; // return the size of set.

	set <int> st;
	st.insert(5); // -> {5}
	st.insert(5); // -> {5}

	for(auto it=st.begin();it!=end();i++) {
		cout<<*it<<endl;
	}

	for(auto it:st) {
		cout<<it<<endl;
	}

	// delete the entire set
	st.erase(st.begin(),st.end()); //makes sure the entire set is deleted from begin to end

	// unordered set
	// unordered_set is not in ascending order it can be in any order

	unordered_set <int> st;
	st.insert(2);
	st.insert(3);
	st.insert(1);

	// average time complexity in unordered_set is O(1) whereas in set is log n.
	// worst case is linear in nature, O(n)

	// When to choose sets ?
	// If in the question we require the use case of unique elements.
	// What to choose in questions unordered_set or set ?
	// If in the question, we do not require the use case of ascending orders
	// make sure to use unordered_set
	// but if we are getting TLE, then switch to set

	// set => sorted, O(log n)
	// unordered_set => no fixed fashion of storing, average case: O(1), worst case: O(n)

	// multiset
	// all the elements, sorted(ascending)
	multiset <int> ms;
	ms.insert(1);
	ms.insert(1);
	ms.insert(2);
	ms.insert(2);
	ms.insert(3);
	// ms -> {1, 1, 2, 2, 3}

	ms.emplace(1); // slightly faster than ms.insert(1);
	ms.emplace(1);
	ms.emplace(2);
	ms.emplace(2);
	ms.emplace(3);
	// ms -> {1, 1, 2, 2, 3}

	ms.erase(2); // all the instances of the key will be erased

	auto it=ms.find(2); // returns an iterator pointing to the first instance of the key
	ms.clear(); //deletes the entire set
	ms.erase(ms.begin(),ms.end()); //deletes the entire set

	//log n in size

	for(auto it=ms.begin();it!=ms.end();it++) {
		cout<<*it<<" ";
	}

	for(auto it:ms) {
		cout<<it<<" ";
	}

	// find how many times instance occurs
	ms.count();

	ms.erase(ms.find(2)); // deletes the first instance of the key
	ms.erase(ms.find(2),ms.find(2)+2);

	// Key Value
	// map stores only unique keys
	// map stores everything in the sorted(ascending) order
	// map always sorted according to the keys.
	// map with existing key values will overwrite the previous value.

	map <string,int> mpp;
	mpp["abhi"]=27;
	mpp["raj"]=31;
	mpp["hima"]=67;
	mpp["sandeep"]=89;
	mpp["abhi"]=29;

	mpp.emplace("abhi",45);
	mpp.erase("abhi"); // mpp.erase(key)
	mpp.erase(mpp.begin()); // mpp.erase(iterator)
	mpp.erase(mpp.begin(),mpp.end()); // mpp.erase(startIterator,endIterator)
	mpp.clear(); // entire map is erased
	mpp.erase(mpp.begin(),mpp.begin()+2); // cleans up a given range
	auto it=mpp.find("abhi"); // points to where key lies
	auto it=mpp.find("simran"); // points to end since this key does not exist

	if(mpp.empty()) { // check for emptiness
		cout<<"Yes...Empty";
	}

	mpp.count("abhi"); // will always return 1 in case of map because map stores unique keys
	// time complexity of map is log n

	pair <int,int> pr;
	pr.first=1;
	pr.second=10;

	// how to print the map
	for(auto it:mpp) {
		cout<<it.first<<" "<<it.second<<endl;
	}

	for(auto it=mpp.begin();it!=mp.end();it++) {
		cout<<it->first<<" "<<it->second<<endl;
	}

	// almost everything is same as map.
	// unordered_map doesn't store in any order
	unordered_map <int,int> mpp;
	// O(1) in almost all cases
	// O(n) in the worst case where n is the container size

	// unordered_map <pair <int,int>, int> mpp; XXXXXXXX Not possible
	// inorder to use pair we need to use map 

	//Pair Class
	pair <int,int> pr = {1,2};
	pair <pair <int,int>, int> pr = {{1, 2}, 2};
	cout<<pr.first.second<<endl; //2

	pair <pair <int,int>, pair <int,int>> pr = {{1, 2} ,{2, 4}}
	cout<<pr.first.first; //1
	cout<<pr.second.second; //4

	vector <pair <int,int>> vec;
	set <pair <int,int>> st;
	map <pair <int,int>> mpp;

	// Multi Map
	// No sorted keys, store same multiple keys
	multimap <string, int> mpp;
	mpp["abhi"]=2;
	mpp["abhi"]=4;
	mpp.emplace("abhi",5);

	// map => sorted, unique keys
	// unordered_map => no sorted, unique keys
	// multimap => no sorted, multiple keys

	// Stacks and Queues
	// There is no iterator in stacks and queues
	// Implementation is based on array structure
	// Stacks // LIFO DS
	stack <int> st; 
	// push
	// pop
	// top
	// size
	// empty

	st.push(2);
	st.push(4);
	st.push(3);
	st.push(1);

	cout<<st.top(); //prints 1
	st.pop(); // deletes the last entered element
	cout<<st.top(); //prints 3
	st.pop();
	cout<<st.top(); //prints 4

	bool flag=st.empty(); // return true if stack is empty or false

	// deletes the entire stack
	while(!st.empty()) {
		st.pop();
	}

	cout<<st.size(); // number of elements in the stack

	st.emplace(5); // alternative for st.push(5) but a bit faster

	stack <int> st;
	if(!st.empty()) { //inorder to implement stack.top() always check whether stack has some elements.
		cout<<st.top()<<endl; //throws error since stack is empty
	}

	// Queues // FIFO DS
	// all these operations are O(1)
	// deletion takes O(n)
	queue <int> q;
	// push
	// pop
	// front
	// size
	// empty

	q.push(1);
	q.push(5);
	q.push(3);
	q.push(6);

	cout<<q.front(); //1
	q.pop();
	cout<<q.front(); //5

	while(!q.empty()) {
		q.pop();
	}

	queue <int> q;
	for(int i=0;i<10;i++)
		q.push(i);

	// Priority Queue
	// stores all in sorted order and does in O(log n)

	// push
	// pop
	// top
	// size
	// empty

	priority_queue <int> pq; // stores in descending order and hence keeps the max element at the top
	pq.push(1);
	pq.push(5);
	pq.push(2);
	pq.push(6);
	// 6, 5, 2, 1

	cout<<pq.top(); // 6
	pq.pop();
	cout<<pq.top(); // 5

	priority_queue <pair <int,int>> pq;
	pq.push(1,5);
	pq.push(1,6);
	pq.push(1,7);
	// (1,7), (1,6), (1,5)

	// how to get min priority_queue?
	// while inserting make sure to insert negation elements
	// and while extracting make sure to multiply by -1 
	priority_queue <int> pq;
	pq.push(-1);
	pq.push(-5);
	pq.push(-2);
	pq.push(-6);

	cout<<-1*pq.top()<<endl; // 1

	// minimum priority_queue
	priority_queue <int, vector <int>, greater <int>> pq;
	pq.push(1);
	pq.push(5);
	pq.push(2);
	pq.push(6);

	cout<<pq.top(); // 1

	priority_queue <pair <int,int>, vector <pair <int,int>>, greater <pair <int,int>>> pq;

	// Deque => Doubly queue
	deque <int> dq;
	// push_front
	// push_back
	// pop_front
	// pop_back
	// begin
	// end
	// rbegin
	// rend
	// size
	// clear
	// empty
	// at

	list <int> ls;
	// push_front
	// push_back
	// pop_front
	// pop_back
	// begin
	// end
	// rbegin
	// rend
	// size
	// clear
	// empty
	// at
	// remove -> O(1)
	ls.push_front(1);
	ls.push_front(2);
	ls.push_front(3);

	ls.remove(2); // O(1) operation

	// When to use list ?
	// When we want to insert as well as delete from both front and back sides

	// When to use vector ?
	// When we want to insert only from back

	// When to use deque ?
	// People generally don't use deque, people tend to use list.

	// When to use sets ?
	// When we want to store unique elements and sorted(ascending) order

	// When to use unordered sets ?
	// When we want to store unique elements and order is not required

	// When to use multisets ?
	// When we want to store any elements and order is not required

	// When to use map ?
	// When we want to store unique keys and keys in sorted(ascending) order 

	// When to use unordered map ?
	// When we want to store unique keys and keys order is not required

	// When to use multimap ?
	// When we want to store any keys and keys order is not required

	// When to use stack ?
	// When we want to insert from one side and remove from that side too LIFO

	// When to use queue ?
	// When we want to insert from one side and remove from other side FIFO

	// When to use pair ?
	// When we want to pair two different keys

	// When to use priority queue
	// When we want to have properties like queue but should be in decreasing order

	// When to use minimum priority queue
	// When we want to have properties like queue but should be in ascending order

	// If found TLE ?
	// Try unordered or ordered
	// First try with unordered first then ordered



	

	// 1. given n elements, print all the elements that occurs maximum no. times
	// input
	// 5
	// 1 3 3 3 2
	// output
	// 3

	// Using maps
	int n;
	cin>>n;
	map <int,int> mpp;
	int maxi=0;
	for(int i=0;i<n;i++) {
		int x;
		cin>>x;
		mpp[x]++;
		if(mpp[x]>mpp[maxi]) {
			maxi=x;
		}
	}
	cout<<maxi<<endl;
	// Time Complexity: O(nlog n)

	// given n elements, print all elements in sorted order
	// input
	// 6
	// 6 6 3 2 3 5
	// output
	// 2 3 3 5 6 6

	// Multiset
	int n;
	cin>>n;
	multiset <int> ms;
	for(int i=0;i<n;i++) {
		int x;
		cin>>x;
		ms.insert(x);
	}

	for(auto it:ms) {
		cout<<it<<endl;
	}


	// *************************DAY-3***********************************

	// Bitset - Is not a datatype, it's a container. It only stores 1 and 0
	// int -> 16bits
	// char -> 8bits
	// bitset -> 1bit

	bitset <5> bt;
	cin>>bt; // 10101

	// all
	// any
	// count
	// flip
	// none
	// set
	// reset
	// size
	// test

	// 11111
	cout<<bt.all(); // true // returns true or false on the basis of set, if set then true else false
	// 10101
	cout<<bt.all(); // false

	// 10101
	cout<<bt.any(); // true // returns true or false on the basis of set, if any one is set then true else false
	// 11111
	cout<<bt.any(); // false

	// 10100
	cout<<bt.count(); // 2 // prints the number of set bits

	// 00000
	bt.flip(); // 11111 // flips the complete bit
	// 10100
	bt.flip(2); // 10000 // flips the index no.
	// 10111
	bt.flip(3); // 10101

	// 10000
	cout<<bt.none(); // false // prints true if there are no sets else false
	// 00000
	cout<<bt.none(); // true

	// 00000
	bt.set(); // 11111 // sets all the indexes to 1
	// 00000
	bt.set(2); // 00100 // sets the 2nd index
	// 11111
	bt.set(2,0); // 11011

	// 11111
	bt.reset(); // 00000 // turns all the indexes to 0
	// 11111
	bt.reset(2); // 11011 // turns the 2nd index to 0

	// 10100
	cout<<bt.size(); // 5

	// 00000
	cout<<bt.test(1); // false // checks if the bit is set or not at index 1


	// ***************************************Algorithms*******************************************

	// Sorting
	// Array, Vector

	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	// Time complexity for sort is O(nlog n)
	sort(arr,arr+n); // Sorts in increasing order // If in interview it asks for writing sort manually then write merge sort
	
	// arr -> {1, 6, 2, 7, 4}
	// sort it so that only indexes from 1 to 3
	// final arr -> {1, 2, 6, 7, 4}

	sort(arr+1,arr+4); // [1,4)

	vector <int> vec(5,0);
	for(int i=0;i<n;i++) cin>>vec[i];
	sort(vec.begin(),vec.end()); // Sorts in increasing order

	// vec -> {1, 6, 2, 7, 4}
	// sort it so that only indexes from 1 to 3
	// final vec -> {1, 2, 6, 7, 4}

	sort(vec.begin()+1,vec.begin()+4); // [1, 4)

	// Reverse
	// reverse(startIterator,endIterator) -> [)
	reverse(arr,arr+n); // It reverses everything from start and exclusing end

	reverse(vec.begin(),vec.end());

	reverse(vec.begin(),vec.begin()+4);

	// if i want to find the maximum elements in any index range i to j give me the maximum
	int maxi=INT_MIN;
	for(int k=0;k<n;k++) {
		if(a[k]>maxi) {
			maxi=a[k];
		}
	}

	int el=*max_element(arr,arr+n); // Inorder to get the max element we need to put star, or for the index without star
	int el=*min_element(arr,arr+n);	// Inorder to get the min element we need to put star, or for the index without star

	int el=*max_element(vec.begin(),vec.end());
	int el=*min_element(vec.begin(),vec.end());

	// if i give you a range and i want you to find the sum in that range i to j, tell me the sum in that range i to j

	int sum=0;
	for(int k=i;k<=j;k++) {
		sum+=a[k];
	}

	// int SUM_VARIABLE_NAME=accumulate(START_ITERATOR,END_ITERATOR,INITIAL_SUM);
	int sum=accumulate(arr,arr+n,0); // Sums up all the array elements
	int sum=accumulate(vec.begin(),vec.end(),0); // Sums up all the vector elements

	// arr[] -> {1, 6, 7, 1, 2, 1, 3}
	// x = 1
	// tell me how many times the x element occurs in the array

	// Time Complexity: O(n)
	int cnt=0;
	for(int i=0;i<n;i++) {
		if(a[i]==x) {
			cnt++;
		}
	}
	
	// count(START_ITERATOR,END_ITERATOR,KEY); // Time Complexity: O(n)
	int cnt=count(arr,arr+n,1); // Counts the number of occurence in an array
	int cnt=count(vec.begin(),vec.end(),1); // Counts the number of occurence in the vector

	// arr[] -> {1, 2, 5, 1, 2, 4, 4}
	// I want to find the first occurence of 2 i.e., x=2
	// It is in the index 1

	int index=-1;
	for(int i=0;i<n;i++) {
		if(arr[i]==x) {
			index=i;
			break;
		}
	}

	// find(START_ITERATOR,END_ITERATOR,KEY);
	auto it=find(arr,arr+n,2); // returns an iterator pointing to the first instance of it, or else returns pointing to the end() if it is not there
	int index=it-arr;

	auto it=find(vec.begin(),vec.end(),2); // returns an iterator pointing to the first instance of it, or else returns pointing to the end() if it is not there
	int index=it-vec.begin();

	// arr[] -> {1, 5, 6, 2, 3, 5, 6}
	// x=4

	auto it=find(vec.begin(),vec.end(),4); // returns null i.e., after the last element
	if(it==vec.end()) {
		cout<<"Element is not present";
	} else {
		cout<<"Element is first present at: "<<it-vec.begin();
	}

	// Binary Search
	// This stl only works on SORTED arrays
	// arr[] -> {1, 5, 7, 9, 10}
	// x=9
	// true -> 9 exists in the array
	// x=8
	// false -> 8 doesn't exist in the array

	// binary_search(FIRST_ITERATOR,LAST_ITERATOR,KEY);
	// returns a true or returns a false
	// Time Complexity: O(log n)
	bool res=binary_search(arr,arr+n,8);
	bool res=binary_search(vec.begin(),vec.end(),8);

	// lower_bound function
	// returns an iterator pointing to the first element which is not less than x
	// arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12}
	// x=10 points to 6th iterator
	// x=6 points to erd iterator
	// x=13 points to end iterator
	// Time Complexity: O(log n)

	auto it=lower_bound(arr,arr+n,x);
	index=it-arr;

	auto it=lower_bound(vec.begin(),vec.end(),x);
	index=it-vec.begin();

	int ind=lower_bound(vec.begin(),vec.end(),x) - vec.begin();

	// upper_bound
	// returns an iterator which points to an element which is just greater than x
	// arr[ ] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12}
	// x=7 points to 5th iterator
	// x=6 points to 3rd iterator
	// x=12 points to end iterator

	auto it=upper_bound(arr,arr+n,x);
	index=it-arr;

	auto it=upper_bound(vec.begin(),vec.end(),x);
	index=it-vec.begin();

	int ind=upper_bound(vec.begin(),vec.end(),x) - vec.begin();

	// Find the first index where the element x lies, array is sorted
	// find function can be used but that takes O(n) times

	// 0th Approach
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	int key;
	cin>>key;
	int index=find(arr,arr+n,key); // Time Complexity: O(n)
	cout<<index;

	// 1st Approach
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	int key;
	cin>>key;
	if(binary_search(arr,arr+n,key)) {
		cout<<lower_bound(arr,arr+n,key) - arr; // Time Complexity: O(2log n)
	} else {
		cout<<"Doesn't exist";
	}

	// 2nd Approach
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	int key;
	cin>>key;
	int index=lower_bound(arr,arr+n,key)-arr; // Time Complexity: O(log n)
	if(index!=n && arr[index] == key) {
		cout<<"Found at: "<<index;
	} else {
		cout<<"Not Found";
	}

	// Find the last occurence of x in array

	// 1st Approach
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	int key;
	cin>>key;
	if(binary_search(arr,arr+n,key)) {
		cout<<upper_bound(arr,arr+n,key) - arr - 1; // Time Complexity: O(2log n)
	} else {
		cout<<"Doesn't exist";
	}

	// 2nd Approach
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	int key;
	cin>>key;
	int index=upper_bound(arr,arr+n,key) - arr; // Time Complexity: O(log n)
	index-=1;
	if(index>=0 && arr[index] == key) {
		cout<<"Last Occurrence: "<<index;
	} else {
		cout<<"Doesn't exist";
	}


	// Find the no. of times the x appears in array

	// 1st Approach // Time Complexity: O(n)
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	int key;
	cin>>key;
	int cnt=count(arr,arr+n,key); 
	cout<<cnt;

	// 2nd Approach // Time Complexity: O(2log n)
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	int key;
	cin>>key;
	int lwr=lower_bound(arr,arr+n,key); 
	int upr=upper_bound(arr,arr+n,key);
	int cnt=upr-lwr;
	cout<<cnt;

	// Permutation - "All combinations"
	// string s="abc"
	// all permutations are as follows:

	// All permutations of "abc" in sorted order
	// abc
	// acb
	// bac
	// bca
	// cab
	// cba

	// Next Permutation
	// Time Complexity : O(n)
	// s="bca"
	bool res=next_permutation(s.begin(),s.end()); // s="cab" // res stores true

	// s="cba"
	bool res=next_permutation(s.begin(),s.end()); // s="cba" // res stores false

	// If I give you any random string s="bca", I want you to print all the permutations

	// 1st Approach
	string s="bca";
	sort(s.begin(),s.end()); // Time Complexity: O(nlog n)
	do {
		cout<<s<<endl;
	} while(next_permutation(s.begin(),s.end()));

	// Previous Permutation
	bool res=prev_permutation(s.begin(),s.end());

	// Comparator
	// Can be used in any linear containers
	sort(arr,arr+n); // sorts in ascending order
	sort(arr,arr+n,comp);

	// descending 
	sort(arr,arr+n,comp); // sort in descending order using comparator function
	sort(arr,arr+n,greater<int>); // greater<int> is an inbuilt comparator which works only if you want to do this in descending order

	vector <vector <int>> vec(n,vector <int>(n,0));

}
