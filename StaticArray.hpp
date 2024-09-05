/*
    StaticArray.hpp

    This file holds the interface file for StaticArray.hpp
*/

#ifndef StaticARRAY_HPP
#define StaticARRAY_HPP

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
    StaticArray(int size) = default;

    /**
     * @brief Construct a new StaticArray object with preallocated Staticarray
     * 
     * @param size size of the Staticarray
     * @param data Staticarray data
     */
    StaticArray(int size, T* data);

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
    ~StaticArray();
};

#endif
