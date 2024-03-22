#include<iostream>
using namespace std;
    
    class Student{
      public:
        int roll;
        Student(int rollNum){
          roll = rollNum;
        }
    };
    
    class Test:public Student{
      public:
        float sub1,sub2,sub3;
        Test(int rollNum,float s1,float s2, float s3):Student(rollNum){
          sub1 = s1;
          sub2 = s2;
          sub3 = s3;
        }
    };
    
    class Sports{
      public:
        float score;
        Sports(float score){
          this->score = score;
        }
    };
    
    class Total:public Test,public Sports{
      public:
        float total;
        Total(int roll, float s1, float s2, float s3, float s) : Test(roll, s1, s2, s3), Sports(s) {
          total = s1+s2+s3+s;
        }
        void display(){
          cout<<"Total Marks is:- "<<total;
        }
    };
    
    
    int main(){
      Total t(1, 90, 80, 70, 85);
      t.display();
    }
