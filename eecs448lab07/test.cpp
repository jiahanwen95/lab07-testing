/**
*	@file test.cpp
*	@Hanwen Jia
*	@4.26.2019
*	@brief A cpp file for test 
*/
#include "test.h"
#include <iostream>
#include <vector>
using namespace std;


void test::t1(){
cout<<"t1:empty list checking (list is empty): ";
LinkedListOfInts* temp = new LinkedListOfInts();
if (temp->isEmpty())
{
    cout << ">V< PASSED!!\n";
}
  else{
    cout << "Y_Y FAILED!!\n";
  }
  delete temp;
}

void test::t2(){
cout<<"t2:empty list checking (list is not empty): ";
LinkedListOfInts* temp = new LinkedListOfInts();
temp->addBack(10);
temp->addBack(100);
if (temp->isEmpty())
{
    cout << "Y_Y FAILED!!\n";
}
  else{
    cout << ">V< PASSED!!\n";
  }
  delete temp;
}


void test::t3(){
  cout << "t3: size count checking (empty): ";

  LinkedListOfInts* temp = new LinkedListOfInts();

  if (temp->size()!=0)
{
    cout << "Y_Y FAILED!!\n";
}
  else{
    cout << ">V< PASSED!!\n";
  }
  delete temp;
}

void test::t4(){
  cout << "t4: size count checking (non-empty): ";

  LinkedListOfInts* temp = new LinkedListOfInts();
for (int i = 0; i < 7; i++){
    temp->addFront(i);
  }
  if (temp->size()!=7)
{
    cout << "Y_Y FAILED!!\n";
}
  else if(temp->size()==7){
    cout << ">V< PASSED!!\n";
  }
  delete temp;
}




void test::t5(){
  cout << "t5: search value checking (none empty) : ";

  LinkedListOfInts* temp = new LinkedListOfInts();
for (int i = 0; i < 7; i++){
    temp->addBack(i);
  }

  if (temp->search(4))
{
    cout << ">V< PASSED!!\n";
}
  else {
    cout << "Y_Y FAILED!!\n";
  }
  delete temp;
}

void test::t6(){
  cout << "t6: search value checking (search empty list): ";

  LinkedListOfInts* temp = new LinkedListOfInts();

  if (temp->search(3))
{
    cout << "Y_Y FAILED!!\n";
}
  else {
    cout << ">V< PASSED!!\n";
  }
  delete temp;
}

void test::t7(){
  cout << "t7: addback check: ";
 
  LinkedListOfInts* temp = new LinkedListOfInts();
    vector<int> testvector;
    temp->addBack(100);
    for (int i = 0; i <7; i++){
    temp->addFront(i);
    testvector.push_back(i);
  }
  
  
  if (temp->toVector()==testvector)
{
    cout << ">V< PASSED!!\n";
}
  else {
    cout << "Y_Y FAILED!!\n";
  }
  delete temp;
}

void test::t8(){
  cout << "t8: addfront check: ";
  vector<int> testvector;
  LinkedListOfInts* temp = new LinkedListOfInts();
 for (int i = 0; i <7; i++){
    temp->addFront(i);
    testvector.insert(testvector.begin(), i);
  }
  
  if (temp->toVector() != testvector)
{
    cout << "Y_Y FAILED!!\n";
}
  else {
    cout << ">V< PASSED!!\n";
  }
  delete temp;
}

void test::t9(){
  cout << "t9: size count after removfront check: ";
  
  LinkedListOfInts* temp = new LinkedListOfInts();
 for (int i = 0; i <7; i++){
    temp->addBack(i);
   
  }
  temp->removeFront();
  
  if (temp->size()==7)
{
    cout << "Y_Y FAILED!!\n";
}
  else {
    cout << ">V< PASSED!!\n";
  }
  delete temp;
}


void test::t10(){
  cout << "t10: size count after removeback check: ";
  
  LinkedListOfInts* temp = new LinkedListOfInts();
 for (int i = 0; i <7; i++){
    temp->addBack(i);
   
  }
  temp->removeBack();
  
  if (temp->size()==7)
{
    cout << "Y_Y FAILED!!\n";
}
  else {
    cout << ">V< PASSED!!\n";
  }
  delete temp;
}


void test::t11(){
  cout << "t11: size count after addback: ";
  
  LinkedListOfInts* temp = new LinkedListOfInts();
 for (int i = 0; i <7; i++){
    temp->addBack(i);
   
  }
   temp->addBack(10);
  
  if (temp->size()!=8)
{
    cout << "Y_Y FAILED!!\n";
}
  else {
    cout << ">V< PASSED!!\n";
  }
  delete temp;
}

void test::t12(){
  cout << "t12: size count after addfront: ";
  
  LinkedListOfInts* temp = new LinkedListOfInts();
 for (int i = 0; i <7; i++){
    temp->addFront(i);
   
  }
   temp->addFront(10);
  
  if (temp->size()!=8)
{
    cout << "Y_Y FAILED!!\n";
}
  else {
    cout << ">V< PASSED!!\n";
  }
  delete temp;
}

void test::t13(){
  cout << "t13: search after  addfront and addback: ";
  
  LinkedListOfInts* temp = new LinkedListOfInts();
 
   temp->addFront(10);
   temp->addBack(133);
  
  if (temp->search(10)&&temp->search(133))
{
    cout << ">V< PASSED!!\n";
}
  else {
    cout << "Y_Y FAILED!!\n";
  }
  delete temp;
}


void test::t14(){
  cout << "t14: search after  removefront: ";
  
  LinkedListOfInts* temp = new LinkedListOfInts();
 
   temp->addFront(1);
      
   temp->removeFront();
  
  if (temp->search(1))
{
    cout << "Y_Y FAILED!!\n";
}
  else {
    cout << ">V< PASSED!!\n";
  }
  delete temp;
}

void test::t15(){
  cout << "t15: search after  removeback: ";
  
  LinkedListOfInts* temp = new LinkedListOfInts();
 
   temp->addFront(1);
      
   temp->removeBack();
  
  if (temp->search(1))
{
    cout << "Y_Y FAILED!!\n";
}
  else {
    cout << ">V< PASSED!!\n";
  }
  delete temp;
}


void test::run(){
t1();
t2();
t3();
t4();
t5();
t6();
t7();
t8();
t9();
t10();
t11();
t12();
t13();
t14();
t15();
}