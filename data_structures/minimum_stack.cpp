/*
	Minimum stack
*/

stack<pair<int, int>> st;

//adding
int new_min = st.empty() ? new_elem : min(new_elem, st.top().second);
st.push({new_elem, new_min});

//removing
int removed_element = st.top().first;
st.pop();

//finding minimum
int minimum = st.top().second;
