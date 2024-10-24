#include "BubbleSort.h"
#include "ExchangeSort.h"
#include "InsertSort.h"
#include "OptimizedBubbleSort.h"
#include "SelectionSort.h" 
#include "BinaryInsertionSort.h"
#include "ShakerSort.h"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("InsertionsSort: Single Element Array", "[InsertSort]") {
    int arr[] = { 5 };
    InsertSort(arr, 1);
    REQUIRE(arr[0] == 5);
}

TEST_CASE("InsertionsSort: Sorted Array", "[InsertSort]") {
    int arr[] = { 1, 2, 3, 4, 5 };
    InsertSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("InsertionsSort: Reversed Array", "[InsertSort]") {
    int arr[] = { 5, 4, 3, 2, 1 };
    InsertSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("InsertionsSort: All Same Elements", "[InsertSort]") {
    int arr[] = { 7, 7, 7, 7 };
    InsertSort(arr, 4);
    int expected[] = { 7, 7, 7, 7 };

    for (int i = 0; i < 4; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("InsertionsSort: Array with Negative Numbers", "[InsertSort]") {
    int arr[] = { 3, -1, 2, -5, 0 };
    InsertSort(arr, 5);
    int expected[] = { -5, -1, 0, 2, 3 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("InsertionsSort: Double Array", "[InsertSort]") {
    double arr[] = { 3.1, -1.2, 2.0, -5.5, 0.0 };
    InsertSort(arr, 5);
    double expected[] = { -5.5, -1.2, 0.0, 2.0, 3.1 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}
TEST_CASE("BubbleSort: Single Element Array", "[BubbleSort]") {
    int arr[] = { 5 };
    BubbleSort(arr, 1);
    REQUIRE(arr[0] == 5);
}

TEST_CASE("BubbleSort: Already Sorted Array", "[BubbleSort]") {
    int arr[] = { 1, 2, 3, 4, 5 };
    BubbleSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("BubbleSort: Reversed Array", "[BubbleSort]") {
    int arr[] = { 5, 4, 3, 2, 1 };
    BubbleSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("BubbleSort: Array with Duplicates", "[BubbleSort]") {
    int arr[] = { 7, 7, 7, 7 };
    BubbleSort(arr, 4);
    int expected[] = { 7, 7, 7, 7 };

    for (int i = 0; i < 4; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("BubbleSort: Array with Negative Numbers", "[BubbleSort]") {
    int arr[] = { 3, -1, 2, -5, 0 };
    BubbleSort(arr, 5);
    int expected[] = { -5, -1, 0, 2, 3 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("BubbleSort: Double Array", "[BubbleSort]") {
    double arr[] = { 3.1, -1.2, 2.0, -5.5, 0.0 };
    BubbleSort(arr, 5);
    double expected[] = { -5.5, -1.2, 0.0, 2.0, 3.1 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("ExchangeSort: Single Element Array", "[ExchangeSort]") {
    int arr[] = { 5 };
    ExchangeSort(arr, 1);
    REQUIRE(arr[0] == 5);
}

TEST_CASE("ExchangeSort: Already Sorted Array", "[ExchangeSort]") {
    int arr[] = { 1, 2, 3, 4, 5 };
    ExchangeSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("ExchangeSort: Reversed Array", "[ExchangeSort]") {
    int arr[] = { 5, 4, 3, 2, 1 };
    ExchangeSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("ExchangeSort: Array with Duplicates", "[ExchangeSort]") {
    int arr[] = { 7, 7, 7, 7 };
    ExchangeSort(arr, 4);
    int expected[] = { 7, 7, 7, 7 };

    for (int i = 0; i < 4; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("ExchangeSort: Array with Negative Numbers", "[ExchangeSort]") {
    int arr[] = { 3, -1, 2, -5, 0 };
    ExchangeSort(arr, 5);
    int expected[] = { -5, -1, 0, 2, 3 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("ExchangeSort: Double Array", "[ExchangeSort]") {
    double arr[] = { 3.1, -1.2, 2.0, -5.5, 0.0 };
    ExchangeSort(arr, 5);
    double expected[] = { -5.5, -1.2, 0.0, 2.0, 3.1 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("OptimizedBubbleSort: Single Element Array", "[OptimizedBubbleSort]") {
    int arr[] = { 5 };
    OptimizedBubbleSort(arr, 1);
    REQUIRE(arr[0] == 5);
}

TEST_CASE("OptimizedBubbleSort: Already Sorted Array", "[OptimizedBubbleSort]") {
    int arr[] = { 1, 2, 3, 4, 5 };
    OptimizedBubbleSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("OptimizedBubbleSort: Reversed Array", "[OptimizedBubbleSort]") {
    int arr[] = { 5, 4, 3, 2, 1 };
    OptimizedBubbleSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("OptimizedBubbleSort: Array with Duplicates", "[OptimizedBubbleSort]") {
    int arr[] = { 7, 7, 7, 7 };
    OptimizedBubbleSort(arr, 4);
    int expected[] = { 7, 7, 7, 7 };

    for (int i = 0; i < 4; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("OptimizedBubbleSort: Array with Negative Numbers", "[OptimizedBubbleSort]") {
    int arr[] = { 3, -1, 2, -5, 0 };
    OptimizedBubbleSort(arr, 5);
    int expected[] = { -5, -1, 0, 2, 3 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("OptimizedBubbleSort: Double Array", "[OptimizedBubbleSort]") {
    double arr[] = { 3.1, -1.2, 2.0, -5.5, 0.0 };
    OptimizedBubbleSort(arr, 5);
    double expected[] = { -5.5, -1.2, 0.0, 2.0, 3.1 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("SelectionSort: Single Element Array", "[SelectionSort]") {
    int arr[] = { 5 };
    SelectionSort(arr, 1);
    REQUIRE(arr[0] == 5);
}

TEST_CASE("SelectionSort: Already Sorted Array", "[SelectionSort]") {
    int arr[] = { 1, 2, 3, 4, 5 };
    SelectionSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("SelectionSort: Reversed Array", "[SelectionSort]") {
    int arr[] = { 5, 4, 3, 2, 1 };
    SelectionSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("SelectionSort: Array with Duplicates", "[SelectionSort]") {
    int arr[] = { 7, 7, 7, 7 };
    SelectionSort(arr, 4);
    int expected[] = { 7, 7, 7, 7 };

    for (int i = 0; i < 4; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("SelectionSort: Array with Negative Numbers", "[SelectionSort]") {
    int arr[] = { 3, -1, 2, -5, 0 };
    SelectionSort(arr, 5);
    int expected[] = { -5, -1, 0, 2, 3 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("SelectionSort: Double Array", "[SelectionSort]") {
    double arr[] = { 3.1, -1.2, 2.0, -8, 0.0 };
    SelectionSort(arr, 5);
    double expected[] = { -8, -1.2, 0.0, 2.0, 3.1 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("InsertionBinarySort: Single Element Array", "[InsertionBinarySort]") {
    int arr[] = { 5 };
    BinaryInsertionSort(arr, 1);
    REQUIRE(arr[0] == 5);
}

TEST_CASE("InsertionBinarySort: Already Sorted Array", "[InsertionBinarySort]") {
    int arr[] = { 1, 2, 3, 4, 5 };
    BinaryInsertionSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("InsertionBinarySort: Reversed Array", "[InsertionBinarySort]") {
    int arr[] = { 5, 4, 3, 2, 1 };
    BinaryInsertionSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("InsertionBinarySort: Array with Duplicates", "[InsertionBinarySort]") {
    int arr[] = { 7, 7, 7, 7 };
    BinaryInsertionSort(arr, 4);
    int expected[] = { 7, 7, 7, 7 };

    for (int i = 0; i < 4; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("InsertionBinarySort: Array with Negative Numbers", "[InsertionBinarySort]") {
    int arr[] = { 3, -1, 2, -5, 0 };
    BinaryInsertionSort(arr, 5);
    int expected[] = { -5, -1, 0, 2, 3 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("ShakerSort: Single Element Array", "[ShakeSort]") {
    int arr[] = { 5 };
    ShakerSort(arr, 1);
    REQUIRE(arr[0] == 5);
}

TEST_CASE("ShakerSort: Already Sorted Array", "[ShakeSort]") {
    int arr[] = { 1, 2, 3, 4, 5 };
    ShakerSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("ShakerSort: Reversed Array", "[ShakeSort]") {
    int arr[] = { 5, 4, 3, 2, 1 };
    ShakerSort(arr, 5);
    int expected[] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("ShakerSort: Array with Duplicates", "[ShakeSort]") {
    int arr[] = { 7, 7, 7, 7 };
    ShakerSort(arr, 4);
    int expected[] = { 7, 7, 7, 7 };

    for (int i = 0; i < 4; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}

TEST_CASE("ShakerSort: Array with Negative Numbers", "[ShakeSort]") {
    int arr[] = { 3, -1, 2, -5, 0 };
    ShakerSort(arr, 5);
    int expected[] = { -5, -1, 0, 2, 3 };

    for (int i = 0; i < 5; i++) {
        REQUIRE(arr[i] == expected[i]);
    }
}