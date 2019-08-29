/*! \mainpage
## 一个简单的C++工具库, 基于C++11标准
### 工具类或函数列表:
- TaskQueue: 一个线程安全的任务队列类(TaskQueue.hpp)
- WorkerThread: 一个处理任务队列的工作线程类(WorkerThread.hpp)
- SpinLock: 一个自旋锁类(SpinLock.hpp)
- MTQueue: 一个多线程版本的队列类(MTQueue.hpp)
- Stopwatch: 一个计时器类(BasicStopwatch.hpp, TimerBaseChrono.hpp, Stopwatch.hpp)
- PriorityQueue: 一个优先级队列类(heap_functions.hpp, PriorityQueue.hpp)
- heap_sort: 一个堆排序算法(heap_functions.hpp, sort_functions.hpp)
- PriorityQueueRef: 一个基于索引的优先级队列类(PriorityQueueRef.hpp)
- sequence_search, binary_search, lower_bound, upper_bound: 一些简单的查找算法(search_functions.hpp)
- MemoryPool: 固定大小对象的内存池(MemoryPool.hpp)
- BulkMemoryPool: 固定大小的内存池(BulkMemoryPool.hpp)
- ByteMemoryPool: 可变大小的内存池(ByteMemoryPool.hpp)
- MTMemoryPool: 一个支持多线程的内存池(MTMemoryPool.hpp)
*/
#ifndef MINI_UTILS_INC
#define MINI_UTILS_INC
#include "BasicStopwatch.hpp"
#include "BulkMemoryPool.hpp"
#include "ByteMemoryPool.hpp"
#include "dump_functions.hpp"
#include "heap_functions.hpp"
#include "LCS.hpp"
#include "MemoryPool.hpp"
#include "MTMemoryPool.hpp"
#include "MTQueue.hpp"
#include "PriorityQueue.hpp"
#include "PriorityQueueRef.hpp"
#include "RandomNumber.hpp"
#include "search_functions.hpp"
#include "set_functions.hpp"
#include "sort_functions.hpp"
#include "SpinLock.hpp"
#include "Stopwatch.hpp"
#include "TaskQueue.hpp"
#include "TimerBaseChrono.hpp"
#include "WorkerThread.hpp"
#endif
