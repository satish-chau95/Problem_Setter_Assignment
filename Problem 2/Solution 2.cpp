// हरे कृष्ण हरे कृष्ण, कृष्ण कृष्ण हरे हरे ||

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
//#define int long long
struct Node
{
    int data;
    Node* next;
};
 

void push(Node*& headRef, int data)
{

    Node* newNode = new Node;
 
    newNode->data = data;
    newNode->next = headRef;
    headRef = newNode;
}
 

bool detectCycle(Node* head)
{

    Node *slow = head, *fast = head;
 
    while (fast && fast->next)
    {

        slow = slow->next;
 

        fast = fast->next->next;
 
        if (slow == fast) {
            return true;
        }
    }
 
    return false;
}
void solve(){
// int n;
// cin>>n;
// int keys[n];
// for(int i=0;i<n;i++){
// 	cin>>keys[i];
// }
int keys[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(keys) / sizeof(keys[0]);
 
    Node* head = nullptr;
    for (int i = n - 1; i >= 0; i--) {
        push(head, keys[i]);
    }
 
    head->next->next->next->next->next = head->next->next;
 
    if (detectCycle(head)) {
        cout << "Cycle Found";
    }
    else {
        cout << "No Cycle Found";
    }

}
//signed main(){
int main(){
	fast_io;
	//#ifndef ONLINE_JUDGE
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//#endif
	int t=1; //cin>>t;
	while(t--){
	solve();
	}
	return 0;
}

// हरे राम हरे राम, राम राम हरे हरे ||