/*
	Minimum queue

	Notes: implementation 1
*/

deque<int> q;

//finding minimum
int minimum = q.front();

//adding element
while (!q.empty() && q.back() > new_element)
    q.pop_back();
q.push_back(new_element);

//removing element
if (!q.empty() && q.front() == remove_element)
    q.pop_front();
