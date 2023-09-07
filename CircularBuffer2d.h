#ifndef CIRCULARBUFFER2D_H
#define CIRCULARBUFFER2D_H

template<typename T, int rows, int cols>
class CircularBuffer2d {
private:
  T buffer_[rows][cols];
  int capacity_;
  int head_;
  int tail_;
  int currentSize_;

public:
  CircularBuffer2d() : capacity_(rows), head_(0), tail_(0), currentSize_(0) {}

  bool isEmpty() const{
    return currentSize_ == 0;
  }

  bool isFull() const{
    return currentSize_ == capacity_;
  }

  bool put(const T data[cols]){
    if (isFull()) {
      std::cout << "Buffer is full. Cannot put." << std::endl;
      return false;
    }
    for (int i = 0; i < cols; i++){
      buffer_[head_][i] = data[i];
    }
    head_ = (head_ + 1) % capacity_;
    currentSize_++;
    return true;
  }

  bool get(T data[cols]){
    if (isEmpty()) {
      std::cout << "Buffer is empty. Cannot get." << std::endl;
    }
    for (int i = 0; i < cols; i++) {
      data[i] = buffer_[tail_][i];
    }
    tail_ = (tail_ + 1) % capacity_;
    currentSize_--;
    return true;
  }
};

#endif