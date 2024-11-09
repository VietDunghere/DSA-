#include<bits/stdc++.h>
using namespace std;
/* 
struct Node{
    data-type name
    Node* next 
}
    lien ket 2 node co cung kieu du lieu
*/
typedef struct Node* node;
struct Node{
    int data;
    Node* next;
};
node makenode(int x){
    node tmp = new Node();
    tmp -> data = x;
    tmp -> next = NULL;
    return tmp;
}
// kiem tra rong
bool empty(node a){
    return a==NULL;
}
int Size(node a){
    int dem = 0;
    while(a!= NULL){
        dem ++;
        a = a-> next; //gan dia chi cua node tiep theo cho node hien tai
    }
    return dem;
}
// them 1 phan tu vao dau dslk
void insertFirst(node &a,int x){
    node tmp = makenode(x);
    if(a== NULL){
        a = tmp;
    }
    else {
        tmp->next = a;
        a=tmp; 
    }
}
// them phan tu vao cuoi
void insertLast(node &a, int x){
    node tmp = makenode(x);
    if(a== NULL){
        a=tmp;
    }
    else {
        node p = a;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next = tmp;
    }
}
//them phan tu vao giua 
void insertMiddle(node &a,int pos, int x){
    int n = Size(a);
    if(pos < 0 || pos > n+1){
        return;
    }
    else if(pos==1){
        insertFirst(a,x);
        return;
    }
    else if(pos == n+1){
        insertLast(a,x);
        return;
    }
    node p = a;
    for(int i=1;i<pos -1;i++){
        p=p->next;
    }
    // hien tai con tro p->next dang o vi tri pos con p dang o pos
    node tmp = makenode(x);
    tmp ->next = p->next; // next cua tmp chi vao pos
    p->next = tmp;  // cho phan next cua p hien tai vao node moi

}

// xoa phan tu dau
void deleteFirst(node &a){
    if(a== NULL) return;
    else{
        a=a->next;
    }
}
// xoa phan tu cuoi
void deleteLast(node &a){
    if(a==NULL) return;
    node truoc = NULL;
    node sau = a;
    while(sau -> next != NULL){
        truoc = sau;
        sau = sau->next;
    }
    /* sau vong while:
        con tro sau dang o vi tri cuoi (ngay canh NULL)
        con tro truoc dang o vi tri gan cuoi (canh sau)
    */
    if(truoc == NULL){// neu dslk chi co 1 phan tu thi xoa phan tu day la xong
        a== NULL;
    }
    else{
        truoc -> next = NULL;
        /*xoa di con tro tiep theo sau con tro truoc ( hien tai la con tro sau)
        bang cach gan con tro tiep theo thanh NULL*/
    }
}
//xoa o giua 
void deleteMiddle (node &a, int pos){
    if(pos < 0 || pos > Size(a)){
        return ;
    }
    node truoc = NULL;
    node sau = a;
    for(int i=1;i<pos;i++){
        truoc = sau;
        sau = sau->next;
    }
    if (truoc ==NULL){
        a=a->next;//co 1 phan tu thi xoa o vi tri dau tien la xong
    }
    else{
        truoc->next = sau->next;
    }
}
int in(node a){
    while(a!=NULL){
        cout << a->data << " ";
        a=a->next;
    }
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << sizeof(Node)<< endl;
    node head = NULL;

}
