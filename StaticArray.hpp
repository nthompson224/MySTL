/*
    StaticArray.hpp

    This file holds the interface file for StaticArray.hpp
*/

#ifndef StaticARRAY_HPP
#define StaticARRAY_HPP

#include <functional>

template<typename T>
class StaticArray {
    T* arr = nullptr;
    int length = 0;
    
public:
    /**
     * @brief Construct a new StaticArray object
     * 
     * @param size size of the Staticarray
     */
    StaticArray(int size) {
        if (size < 0) {
            std::cerr << "Error in StaticArray: Cannot allocate a StaticArray of a negative size";
            throw -1;
        }
        arr = new T[size];
        length = size;
    }

    /**
     * @brief Construct a new StaticArray object with preallocated Staticarray
     * 
     * @param data array data
     */
    StaticArray(T* data) {
        length = sizeof(data) / sizeof(T) + 1;
        arr = new T[length];
        for (int i = 0; i < length; ++i) {
            arr[i] = data[i];
        }
    }

    /**
     * @brief Copy constructor for a new StaticArray object
     * 
     * @param arr StaticArray to copy from
     */
    StaticArray(StaticArray& arr);

    /**
     * @brief Move constructor for a new StaticArray object
     * 
     * @param arr StaticArray to move from
     */
    StaticArray(StaticArray&& arr);
    
    /**
     * @brief Destroy the StaticArray object
     * 
     */
    ~StaticArray() {
        delete[] arr;
    }

    int size();
    bool empty();
    int sort(std::function<bool> callback);
    void shuffle();
    int find(T value);
    T operator[](int index);
};

#endif
