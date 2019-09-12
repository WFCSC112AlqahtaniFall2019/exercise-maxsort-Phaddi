#include <iostream>
#include <vector>
using namespace std;

// function declarations
void maxSort(vector<int>& list);
void swap(vector<int> &v, int a, int b);
void print(const vector<int>& list);

int main() {

    vector<int> v(5);  // vector to be sorted
    // initialize v
    cout << "Type 5 numbers you want to sort: " << endl;
    for(int i = 0; i < 5; i++)
    {
        cin >> v.at(i);
    }

    // print the unsorted v
    cout << "This is the unsorted vector: ";
    for(int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;


    // sort v
    maxSort(v);

    // print the sorted v
    cout << "This is the sorted vector: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;

    return 0;
}

/* the function definitions */

//Max sort function
void maxSort(vector<int>& list){
    for(int i=list.size()-1;i>=0;i--){
        /*complete the code*/
        int maxVal = list.at(0);
        int maxValIndex=0;
        for(int j=0;j<=i;j++) {
            if (list.at(j) > maxVal) {
                maxVal = list.at(j);
                maxValIndex=j;
            }
        }
    //complete code here
        swap(list,maxValIndex, i);
    }
}

// swap function
void swap(vector<int> &whatever, int a, int last){
    int temp1;
    temp1 = whatever.at(a);
    whatever.at(a)=whatever.at(last) ;
    whatever.at(last)=temp1;

}

// print function
void print(const vector<int>& list){
    for(int i = 0; i < list.size() - 1; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

