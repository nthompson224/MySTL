/*
    Array.hpp

    This file holds the interface file for Array.hpp
*/

#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array {
    T* arr = nullptr;
    int length = 0;
    
public:
    /**
     * @brief Construct a new Array object
     * 
     * @param size size of the array
     */
    Array(int size) = default;

    /**
     * @brief Construct a new Array object with preallocated array
     * 
     * @param size size of the array
     * @param data array data
     */
    Array(int size, T* data);

    /**
     * @brief Copy constructor for a new Array object
     * 
     * @param arr Array to copy from
     */
    Array(Array& arr);

    /**
     * @brief Move constructor for a new Array object
     * 
     * @param arr Array to move from
     */
    Array(Array&& arr);
    
    /**
     * @brief Destroy the Array object
     * 
     */
    ~Array();
};

#endif
