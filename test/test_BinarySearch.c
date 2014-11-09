#include "unity.h"
#include "BinarySearch.h"

void setUp(void){}
void tearDown(void){}

void test_binarySearch_with_4_element_for_last_element(void){
	int array[] = {2,4,6,8};
	int returnedIndex;
	returnedIndex = binarySearch(8,array,0,3);
	
	TEST_ASSERT_EQUAL(3,returnedIndex);
}
void test_binarySearch_with_4_element_for_first_element(void){
	int array[] = {2,4,6,8};
	int returnedIndex;
	returnedIndex = binarySearch(2,array,0,3);
	
	TEST_ASSERT_EQUAL(0,returnedIndex);
}
void test_binarySearch_with_4_element_for_no_element(void){
	int array[] = {2,4,6,8};
	int returnedIndex;
	returnedIndex = binarySearch(50,array,0,3);
	
	TEST_ASSERT_EQUAL(-1,returnedIndex);
}
void test_binarySearch_with_9_element_for_first_element(void){
	int array[] = {5,10,15,20,25,30,35,40,45};
	int returnedIndex;
	returnedIndex = binarySearch(5,array,0,8);
	
	TEST_ASSERT_EQUAL(0,returnedIndex);
}
void test_binarySearch_with_10_element_for_first_element(void){
	int array[] = {5,10,15,20,25,30,35,40,45,50};
	int returnedIndex;
	returnedIndex = binarySearch(5,array,0,9);
	
	TEST_ASSERT_EQUAL(0,returnedIndex);
}
void test_binarySearch_with_9_element_for_last_element(void){
	int array[] = {5,10,15,20,25,30,35,40,45};
	int returnedIndex;
	returnedIndex = binarySearch(30,array,0,8);
	
	TEST_ASSERT_EQUAL(5,returnedIndex);
}
void test_binarySearch_with_10_element_for_last_element(void){
	int array[] = {5,10,15,20,25,30,35,40,45,50};
	int returnedIndex;
	returnedIndex = binarySearch(50,array,0,9);
	
	TEST_ASSERT_EQUAL(9,returnedIndex);
}
void test_binarySearch_with_15_element(void){
	int array[] = {5,10,15,20,25,30,35,40,45,50,60,70,80,90,100};
	int returnedIndex;
	returnedIndex = binarySearch(100,array,0,14);
	
	TEST_ASSERT_EQUAL(14,returnedIndex);
}