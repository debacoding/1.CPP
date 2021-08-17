/*
Create a class named  with the following specifications:

An instance variable named  to hold a student's  exam scores.
A void input() function that reads  integers and saves them to .
An int calculateTotalScore() function that returns the sum of the student's scores.
*/

include <bits/stdc++.h>
using namespace std;

// Write your Student class here
class Student{
  private:
    int scores[5];
    int sum;
  public:
    Student() : sum(0) {}
    int calculateTotalScore() {return sum;}
    void input() {
        for(int i=0; i<5; i++) {
            cin >> scores[i];
            sum+=scores[i];
        }
    }  
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}

/*
Sample input:
3
30 40 45 10 10
40 40 40 10 10
50 20 30 10 10
Sample output
1
*/
