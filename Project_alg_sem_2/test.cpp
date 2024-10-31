#include <gtest/gtest.h>
#include "binary_insertion_sort.h"
#include "shaker_sort.h"

// сортиривка шейкиром
TEST(shaker_sortTest, SingleElementArray) {
    int arr[] = { 5 };
    shaker_sort(arr, 1);
    EXPECT_EQ(arr[0], 5);
}


TEST(shaker_sortTest, SortedArray) {
    int arr[] = { 1, 2, 3, 4, 5 };
    shaker_sort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(shaker_sortTest, ReversedArray) {
    int arr[] = { 5, 4, 3, 2, 1 };
    shaker_sort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}
TEST(shaker_sortTest, AllSameElements) {
    int arr[] = { 7, 7, 7, 7 };
    shaker_sort(arr, 4);
    int expected[] = { 7, 7, 7, 7 };
    for (int i = 0; i < 4; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(shaker_sortTest, ArrayWithNegativeNumbers) {
    int arr[] = { 3, -1, 2, -5, 0 };
    shaker_sort(arr, 5);
    int expected[] = { -5, -1, 0, 2, 3 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}


TEST(shaker_sortTest, DoubleArray) {
    double arr[] = { 3.1, -1.2, 2.0, -5.5, 0.0 };
    shaker_sort(arr, 5);
    double expected[] = { -5.5, -1.2, 0.0, 2.0, 3.1 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

// сортиривка вставкой с бинарным поиском
TEST(binary_insertion_sort, SingleElementArray) {
    int arr[] = { 5 };
    binary_insertion_sort(arr, 1);
    EXPECT_EQ(arr[0], 5);
}


TEST(binary_insertion_sort, SortedArray) {
    int arr[] = { 1, 2, 3, 4, 5 };
    binary_insertion_sort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(binary_insertion_sort, ReversedArray) {
    int arr[] = { 5, 4, 3, 2, 1 };
    binary_insertion_sort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}
TEST(binary_insertion_sort, AllSameElements) {
    int arr[] = { 7, 7, 7, 7 };
    binary_insertion_sort(arr, 4);
    int expected[] = { 7, 7, 7, 7 };
    for (int i = 0; i < 4; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(binary_insertion_sort, ArrayWithNegativeNumbers) {
    int arr[] = { 3, -1, 2, -5, 0 };
    binary_insertion_sort(arr, 5);
    int expected[] = { -5, -1, 0, 2, 3 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}


TEST(binary_insertion_sort, DoubleArray) {
    double arr[] = { 3.1, -1.2, 2.0, -5.5, 0.0 };
    binary_insertion_sort(arr, 5);
    double expected[] = { -5.5, -1.2, 0.0, 2.0, 3.1 };
    for (int i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}